#include <stdio.h>

int main(int argc, char **argv)
{
	int contador = 2;
	printf("Argumentos: %s ",argv[1]);
	for(contador = 2; contador < (argc-1); contador++)
	{
			printf("%s ", argv[contador]);
	}
	printf("%s\n", argv[argc-1]);
	return 0;
}
