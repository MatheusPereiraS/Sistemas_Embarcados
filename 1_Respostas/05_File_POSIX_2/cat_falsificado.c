#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "bib_arqs.h"

int main(int argc, char **argv)
{
	char *copia;
	int tam_arq = 0;

	tam_arq = tam_arq_texto(argv[1]);

	copia = (char *) malloc(tam_arq);

	le_arq_texto(argv[1], copia);

	printf("%s", copia);

	free(copia);

	return 0;
}
