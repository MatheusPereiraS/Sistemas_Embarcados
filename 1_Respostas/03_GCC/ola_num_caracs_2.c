#include <stdio.h>
#include <string.h>
#include "num_caracs.h"

int main(int argc, char **argv)
{
	int contador = 0;
	int soma_caracs = 0;
	for(contador = 0; contador < argc; contador++)
	{
		soma_caracs = soma_caracs + num_caracs(argv[contador]);
	}
	printf("Total de caracteres de entrada: %d\n", soma_caracs);
	return 0;
}
