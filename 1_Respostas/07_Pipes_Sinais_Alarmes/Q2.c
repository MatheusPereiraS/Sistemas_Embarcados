#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *mensagens[4];
	int fd[2];
	pid_t pid_filho;
	char buf_filho1[100] = {'0'};
	char buf_pai1[100] = {'0'};
        char buf_filho2[100] = {'0'};
        char buf_pai2[100] = {'0'};
	int contador = 0;

	mensagens[0] = "Pai, qual é a verdadeira essência da sabedoria?";
	mensagens[1] = "Não façais nada violento, praticai somente aquilo que é justo e equilibrado."; 
	mensagens[2] = "Mas até uma criança de três anos sabe disso!";
	mensagens[3] = "Sim, mas é uma coisa difícil de ser praticada até mesmo por um velho como eu...";

	int tamanho0 = strlen(mensagens[0]);
	int tamanho1 = strlen(mensagens[1]);
	int tamanho2 = strlen(mensagens[2]);
	int tamanho3 = strlen(mensagens[3]);

	pipe(fd);

	pid_filho = fork();

	if(pid_filho == 0)
	{
		write(fd[1], mensagens[0], tamanho0);
		sleep(2);
		read(fd[0], buf_filho1, tamanho1);
		printf("PAI: ");
		printf("%s \n", buf_filho1);
		write(fd[1], mensagens[2], tamanho2);
		sleep(2);
		read(fd[0], buf_filho2, tamanho3);
		printf("PAI: ");
		printf("%s \n", buf_filho2);
	}
	else
	{
		sleep(1);
		read(fd[0], buf_pai1, tamanho0);
		printf("FILHO: ");
		printf("%s \n", buf_pai1);
		write(fd[1], mensagens[1], tamanho1);
		sleep(2);
		read(fd[0], buf_pai2, tamanho2);
		printf("FILHO: ");
		printf("%s \n", buf_pai2);
		write(fd[1], mensagens[3], tamanho3);
	}

	sleep(1);

	return 0;
}
