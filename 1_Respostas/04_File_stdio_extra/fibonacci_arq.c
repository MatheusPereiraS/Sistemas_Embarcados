#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *seq_fibonacci;

	double sequencia[100] = {0};
	int contador = 0,limite = 99;

	sequencia[0] = 0;
	sequencia[1] = 1;

	for(contador = 2; contador <=  limite; contador++)
	{
		sequencia[contador] = sequencia[contador - 1] + sequencia[contador -2];
	}

	seq_fibonacci = fopen("seq_fibonacci.bin", "wb");
	if(!seq_fibonacci)
	{
		printf("Erro ao gravar arquivo!\n");
		exit(-1);
	}
	fwrite(sequencia, sizeof(double), 100, seq_fibonacci);

	fclose(seq_fibonacci);
	return 0;
}
