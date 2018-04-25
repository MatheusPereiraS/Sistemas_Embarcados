#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int v_global = 0; // Variavel global para este exemplo

void Incrementa_Variavel_Global(pid_t id_atual)
{
	v_global++;
	printf("ID do processo que executou esta funcao = %d\n", id_atual);
	printf("v_global = %d\n", v_global);
}

int main()
{
	pid_t pid_filho1;
	pid_t pid_filho2;
	pid_t pid_filho3;
	int pid1 = 0, pid2 = 0, pid3 = 0, pidpai = 0;

	pid_filho1 = fork();

	if(pid_filho1 == 0)
	{
		pid1 = (int) getpid();
		printf("*************************\n");
                printf("* Este é o processo FILHO 1 de PID = '%d' *\n", pid1);
                printf("*************************\n");
                printf("\n");
		Incrementa_Variavel_Global(pid1);
	//	printf("*************************\n");
	//	printf("* Processos rodando:\n");
	//	printf("*************************\n");
	//	printf("\n");
	//	int retsys = system("ps");
		printf("\n\n");
	}
	else
	{
	//	sleep(1);

	//	pidpai = (int) getpid();
	//	printf("*************************\n");
	//	printf("* Este é o processo PAI de PID = '%d' *\n", pidpai);
	//	printf("* Processo PAI criando segundo filho\n");
	//	printf("*************************\n");
	//	printf("\n");

		pid_filho2 = fork();

		        if(pid_filho2 == 0)
		        {
				sleep(2);
               			pid2 = (int) getpid();
                		printf("*************************\n");
                		printf("* Este é o processo FILHO 2 de PID = '%d' *\n", pid2);
                		printf("*************************\n");
               			printf("\n");
          //      		printf("*************************\n");
            //    		printf("* Processos rodando:\n");
              //  		printf("*************************\n");
                //		printf("\n");
                //		int retsys2 = system("ps");
				Incrementa_Variavel_Global(pid2);
				printf("\n\n");
				sleep(1);
		        }
			else
			{
			//	sleep(1);
				pid_filho3 = fork();

				if(pid_filho3 == 0)
				{
					sleep(1);
                                	pid3 = (int) getpid();
                                	printf("*************************\n");
                                	printf("* Este é o processo FILHO 3 de PID = '%d' *\n", pid3);
                                	printf("*************************\n");
                                	printf("\n");
					Incrementa_Variavel_Global(pid3);
                                	printf("\n\n");
					sleep(1);
				}

			}
	}

	sleep(3);

	return 0;
}
