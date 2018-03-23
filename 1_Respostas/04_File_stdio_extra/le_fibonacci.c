#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *seq_fibonacci;

	double sequencia[100] = {0};
	int contador = 0;

	seq_fibonacci = fopen("seq_fibonacci.bin", "rb");
	if(!seq_fibonacci)
	{
		printf("Erro ao ler arquivo!\n");
	}

	fread(sequencia, sizeof(double), 100, seq_fibonacci);

	for(contador = 0; contador <= 99; contador++)
	{
		printf("%lf ", sequencia[contador]);
	}

	printf("\n");

	fclose(seq_fibonacci);
	return 0;
}
