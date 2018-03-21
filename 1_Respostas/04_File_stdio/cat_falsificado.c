#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

int main(int argc, char **argv)
{
	int tam_arq = 0;
	char frase[100];

	tam_arq = tam_arq_texto(argv[1]);

	printf("Tamanho do arquivo: %d\n\n", tam_arq);
	
	le_arq_texto(argv[1], frase);
	printf("%s\n", frase);

	return 0;
}
