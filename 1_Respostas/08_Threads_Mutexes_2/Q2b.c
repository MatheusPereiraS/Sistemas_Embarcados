
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

volatile long int v[50000];
volatile long int max_v[4];

void* busca_max(void* limites)
{
	int* l = (int*) limites;
	int contador = 0;
	for(contador = *l; contador < (*l+12500-1); contador++)
	{
		if(v[contador]>max_v[1+(*l/12500)])
		{
			max_v[1+(*l/12500)] = v[contador];
//			printf("------ %li \n", v[contador]);
		}
		else
			continue;
	}
//	printf("Valor max  da thread '%d' = '%li'\n",(1 + *l/12500),max_v[1+(*l/12500)] );

	return NULL;
}

int main()
{
       // long int v[50000];
	clock_t init, fim;

	init = clock();

	double tempo;

       long int max_vm = 0;
       int limite = 50000;
       int contador = 0;

	int lim1 = 0;
	int lim2 = 12500;
	int lim3 = 25000;
	int lim4 = 37500;

	pthread_t t1;
	pthread_t t2;
	pthread_t t3;
	pthread_t t4;


        for(contador = 0; contador < limite; contador++)
        {
                v[contador] = random(2);
//                printf("%li \n", v[contador]);
        }

        printf("Começo de busca partilhada. \n");

  //      sleep(1);

	pthread_create(&t1, NULL, &busca_max, &lim1);
	pthread_create(&t2, NULL, &busca_max, &lim2);
	pthread_create(&t3, NULL, &busca_max, &lim3);
	pthread_create(&t4, NULL, &busca_max, &lim4);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	pthread_join(t3, NULL);
	pthread_join(t4, NULL);

	for(contador = 0; contador < 4; contador++)
	{
		if(max_v[contador]>max_vm)
			max_vm = max_v[contador];
	}

        printf("Valor máximo: '%li' \n", max_vm);

	fim = clock();

	tempo = fim-init;

	printf("Ciclos de clock gastos: %f \n", tempo);


        return 0;
}


