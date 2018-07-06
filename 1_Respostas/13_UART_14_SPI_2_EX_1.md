#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <wiringPi.h>
#include <wiringSerial.h>
#include <errno.h>
#include <string.h>

// Este codigo requer a biblioteca wringPi. Compile-o usando
//    gcc Ex4.c -lwiringPi -o Ex4.out

// Arquivo de acesso a porta serial
//#define TTY "/dev/ttyAMA0"
// Arquivo de acesso a porta serial
// PARA O RASPBERRY PI 3
#define TTY "/dev/ttyS0"

int uart0_fd;
void ctrl_c(int sig)
{
        puts(" Fechando " TTY "...");
        serialClose(uart0_fd);
        exit(-1);
}

int main(void)
{
        unsigned char msp430_input=1, lsb, msb;
        float vec[100] = {0};
        int serial_status;
        float valor = 0, v_l, v_m, soma=0, media=0;
        int token = 0,i=0, n =0;

        signal(SIGINT, ctrl_c);
        uart0_fd = serialOpen(TTY, 9600);
        if(uart0_fd==-1)
        {
                puts("Erro abrindo a UART. Garanta que ela nao");
                puts("esteja sendo usada por outra aplicacao.");
                return -1;
        }
                if(wiringPiSetup() == -1)
        {
                puts("Erro em wiringPiSetup().");
                return -1;
        }
        puts(TTY " aberto.");
        puts("UART configurada:");
        system("stty -F " TTY);
        puts("");
        serialFlush(uart0_fd);
               while(msp430_input!=5)
        {
                msp430_input = (unsigned char) serialGetchar(uart0_fd);
                serial_status = serialDataAvail(uart0_fd);
                if(token == 0)
                {
                        lsb = msp430_input;
                        token = 1;
                }
                else
                {
                        msb = msp430_input;
                        v_l = 0.25*(lsb*3.3/255);
                        v_m = 0.75*(msb*3.3/3);
                        valor = v_l+v_m;
                        token = 0;

                        for(i=0; i<=98; i++)
                        {
                                vec[i] = vec[i+1];
                        }
                        vec[99] = valor;
                }

                n++;
                
                if(n >= 100)
                {
                        n=0;
                        for(i=0;i<=99;i++)
                        {
                        //      printf("i = %f\n", soma);
                                soma=soma+vec[i];
                        }
                        media = soma/100;
                        printf("Media = %f\n", media);
                        soma = 0;
                }
//              if(serial_status==-1)
//                      printf("Erro = %s\n", strerror(errno));
//              else
//                      printf("%d bytes disponiveis\n", serial_status);
        }
        serialClose(uart0_fd);
}




        

