#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main()
{
	clock_t init, fim;
	init = clock();

	double tempo;

	long int v[50000];
	long int max_v = 0;
	int limite = 50000;
	int contador = 0;

	for(contador = 0; contador < limite; contador++)
	{
		v[contador] = random(2);
//		printf("%li \n", v[contador]);
	}

	printf("Começo de busca sequencial. \n");

//	sleep(1);

	for(contador = 0; contador < limite; contador++)
	{
		if(v[contador]>max_v)
			max_v = v[contador];
		else
			continue;
	}

	printf("Valor máximo: '%li' \n", max_v);

	fim = clock();

	tempo = (fim-init);//(CLOCKS_PER_SEC);

	printf("Ciclos de clock gastos: %f \n", tempo);

	return 0;
}
