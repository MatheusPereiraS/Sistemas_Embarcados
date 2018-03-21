#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

int main(int argc, char **argv)
{
	char copia[100];
	int num_ocorrencia = 0;

	le_arq_texto(argv[2], copia);

	const char *marcador = copia;

	while(marcador = strstr(marcador, argv[1]))
	{
		num_ocorrencia++;
		marcador++;
	}

	printf("'%s' ocorre %d vezes no arquivo '%s'.\n",argv[1], num_ocorrencia, argv[2]);

	return 0;
}
