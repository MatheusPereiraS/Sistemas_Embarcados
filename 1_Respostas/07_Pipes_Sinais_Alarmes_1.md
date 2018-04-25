1. Quantos pipes serão criados após as linhas de código a seguir? Por quê?

	(a)
		```C
		int pid;
		int fd[2];
		pipe(fd);
		pid = fork();
		```
	
			R: 1 pipe é criado e pode ser usado por pai e filho.		

	(b)
		```C
		int pid;
		int fd[2];
		pid = fork();
		pipe(fd);
		```

			R: 2 pipes são criados, mas nenhum pode ser usado por pai e filho, ao mesmo tempo.

2. Apresente mais cinco sinais importantes do ambiente Unix, além do `SIGSEGV`, `SIGUSR1`, `SIGUSR2`, `SIGALRM` e `SIGINT`. Quais são suas características e utilidades?

	R: 
	- SIGQUIT: Sinal emitido aos processos quando a tecla de abandono (ctrl+d) são acionadas.
	- SIGHUO: Sinal emitido aos processos associados a um terminal quando este se "desconecta". Este sinal também é emitido a cada processo de um grupo quando chefe termina a sua execução.
	- SIGKILL: ferramenta para matar processos. Não pode ser ignorada, nem intercepitada.
	- SIGPIPE: Escrita sobre um pipe não aberto em leitura.
	- SIGCLD: Enviado ao pai pela terminação de um processo filho.

3. Considere o código a seguir:

	```C
	#include <signal.h>
	#include <unistd.h>
	#include <stdio.h>
	#include <stdlib.h>

	void tratamento_alarme(int sig)
	{
		system("date");
		alarm(1);
	}

	int main()
	{
		signal(SIGALRM, tratamento_alarme);
		alarm(1);
		printf("Aperte CTRL+C para acabar:\n");
		while(1);
	}
	```

	Sabendo que a função `alarm()` tem como entrada a quantidade de segundos para terminar a contagem, quão precisos são os alarmes criados neste código? De onde vem a imprecisão? Este é um método confiável para desenvolver aplicações em tempo real?

	R: Tem resolução até na casa de 'ms', variando alguns unidades de 'ms' de um segundo para o outro. Esta imprecisão vem do compartilhamento de processador com ouutros processos na máquina. Não pode ser usado em tempo real por sua imprecisão.
