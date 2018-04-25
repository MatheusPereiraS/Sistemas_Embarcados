#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int contador = 1;

	for(contador = 1; contador < argc; contador++)
	{
		system(argv[contador]);
		printf("\n");
	}

	return 0;
}
