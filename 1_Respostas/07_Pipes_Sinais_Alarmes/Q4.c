#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

int main()
{
	pid_t pid_filho;
	int fd[2];
	char nome[30];
	char buffer[30];

	pipe(fd);

	pid_filho = fork();

	if(pid_filho == 0)
	{
		printf("Digite seu nome: ");
		scanf("%s", nome);
		write(fd[1], nome, sizeof(nome));
	}
	else
	{
		wait();
		read(fd[0], buffer, sizeof(nome));
		printf("Nome do usuário: %s \n", buffer);
	}

	return 0;
}

