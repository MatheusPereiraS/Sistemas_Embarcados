#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
	pid_t pid_filho1;
	pid_t pid_filho2;
	int pid1 = 0, pid2 = 0, pidpai = 0;

	pid_filho1 = fork();

	if(pid_filho1 == 0)
	{
		pid1 = (int) getpid();
		printf("*************************\n");
                printf("* Este é o processo FILHO 1 de PID = '%d' *\n", pid1);
                printf("*************************\n");
                printf("\n");
		printf("*************************\n");
		printf("* Processos rodando:\n");
		printf("*************************\n");
		printf("\n");
		int retsys = system("ps");
		printf("\n\n");
	}
	else
	{
		sleep(1);

		pidpai = (int) getpid();
		printf("*************************\n");
		printf("* Este é o processo PAI de PID = '%d' *\n", pidpai);
		printf("* Processo PAI criando segundo filho\n");
		printf("*************************\n");
		printf("\n");

		pid_filho2 = fork();

		        if(pid_filho2 == 0)
		        {
               			pid2 = (int) getpid();
                		printf("*************************\n");
                		printf("* Este é o processo FILHO 2 de PID = '%d' *\n", pid2);
                		printf("*************************\n");
               			printf("\n");
                		printf("*************************\n");
                		printf("* Processos rodando:\n");
                		printf("*************************\n");
                		printf("\n");
                		int retsys2 = system("ps");

		        }
			else
				sleep(1);

	}

	return 0;
}
