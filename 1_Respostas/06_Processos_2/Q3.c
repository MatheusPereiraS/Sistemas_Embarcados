#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int contador = 1;
	pid_t pid_filho;
	char *lista_de_argumentos[] = {" ", NULL};

	for(contador = 1; contador < argc; contador++)
	{
		sleep(0.5);
		lista_de_argumentos[0] = argv[contador]; 
		pid_filho = fork();
		if(pid_filho == 0)
		{
			execvp(lista_de_argumentos[0], lista_de_argumentos);
		}
	}

	system("ps");
	sleep(1);

	return 0;
}
