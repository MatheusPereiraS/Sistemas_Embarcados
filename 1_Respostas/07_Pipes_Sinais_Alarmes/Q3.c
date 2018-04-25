#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *mensagens[3];
	int fd[2];
	pid_t pid_filho1;
	pid_t pid_filho2;
	char buf_filho1[100] = {'0'};
	char buf_pai[100] = {'0'};
        char buf_filho2[100] = {'0'};

	mensagens[0] = "FILHO1: Quando o vento passa, é a bandeira que se move.";
	mensagens[1] = "FILHO2: Não, é o vento que se move."; 
	mensagens[2] = "PAI: Os dois se enganam. É a mente dos senhores que se move.";

	int tamanho0 = strlen(mensagens[0]);
	int tamanho1 = strlen(mensagens[1]);
	int tamanho2 = strlen(mensagens[2]);

	pipe(fd);

	pid_filho1 = fork();

	if(pid_filho1 == 0)
	{
		//Processo FILHO 1
		write(fd[1], mensagens[0], tamanho0);
		sleep(1);
		write(fd[1], mensagens[0], tamanho0);
		sleep(3);
		read(fd[0], buf_filho2, tamanho1);
		printf("%s (Lido por FILHO 1) \n", buf_filho2);
		sleep(1);
		read(fd[0], buf_pai, tamanho2);
		printf("%s (Lido por FILHO1) \n", buf_pai);
	}
	else
	{
		pid_filho2 = fork();

		if(pid_filho2 == 0)
		{
			//Processo FILHO 2
			sleep(1);
			read(fd[0], buf_filho1, tamanho0);
			printf("%s (Lido por FILHO 2) \n",buf_filho1);
			sleep(3);
			write(fd[1], mensagens[1], tamanho1);
			sleep(1);
			write(fd[1], mensagens[1], tamanho1);
			sleep(3);
			read(fd[0], buf_pai, tamanho2);
			printf("%s (Lido por FILHO 2) \n", buf_pai);
		}
		else
		{
			//Processo PAI
			sleep(2);
			read(fd[0], buf_filho1, tamanho0);
                        printf("%s (Lido por PAI) \n",buf_filho1);
			read(fd[0], buf_filho2, tamanho1);
			printf("%s (Lido por PAI) \n", buf_filho2);
			sleep(2);
			write(fd[1], mensagens[2], tamanho2);
			sleep(1);
			write(fd[1], mensagens[2], tamanho2);
		}
	}

	sleep(2);

	return 0;
}
