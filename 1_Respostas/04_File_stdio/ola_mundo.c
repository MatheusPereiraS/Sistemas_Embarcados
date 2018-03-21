#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *texto;
	char frase[25] = "Ola mundo!";

	texto = fopen("ola_mundo.txt","w");
	if(!texto)
	{
		printf("Erro na abertura do arquivo.\n");
		exit(-1);
	}
	fputs(frase, texto);
	fclose(texto);
	return 0;
}
