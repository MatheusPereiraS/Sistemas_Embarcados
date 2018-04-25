#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void atualiza_CPU_process(int sig)
{
	system("ps -eo pid,cmd,%cpu --sort=-%cpu");
	alarm(1);
}

void trata_fim(int sig)
{
	printf("\n");
	printf("Processo termiando! \n");
	exit(1);
}

int main()
{
	//char *comando[3] = {"ps","-eo", "pid,cmd,%cpu", "--sort=-%cpu"};

	signal(SIGALRM, atualiza_CPU_process);
	signal(SIGINT, trata_fim);
	alarm(1);

	while(1);
	return 0;
}
