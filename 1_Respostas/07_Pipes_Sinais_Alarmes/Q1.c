#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t pid_filho;
	int contador = 1;
	int fd[2];
	char *numeros[10] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
	char buf_filho[2];

	pipe(fd);

	pid_filho = fork();

	if(pid_filho != 0)
	{
		for(contador = 0; contador < 10; contador++)
		{
			write(fd[1], numeros[contador], sizeof(numeros[contador]));
			sleep(1);
		}
	}
	else
	{
		for(contador = 0; contador < 10; contador++)
		{
			read(fd[0], buf_filho, sizeof(numeros[contador]));
			printf("Valor recebido pelo filho: '%s'\n", buf_filho);
		}
	}

	sleep(1);

	return 0;
}
