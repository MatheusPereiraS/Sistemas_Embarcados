#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int texto;
	char frase[50] = "Ola mundo!";

	texto = open("ola_mundo.txt", O_WRONLY | O_CREAT);

	if(!texto)
	{
		printf("Erro ao criar ou abrir arquivo!");
		exit(-1);
	}

	write(texto, frase, strlen(frase));

	close(texto);

	return 0;
}
