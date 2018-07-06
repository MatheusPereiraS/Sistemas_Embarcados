#include <stdio.h>
#include <pthread.h>

volatile int numero = 0;
//static pthread_mutex_t mutexlock;

void* print_num(void* arg)
{
	int contador = 0;
	usleep(500000);
	for(contador = 0; contador < 10; contador++)
	{
//		pthread_mutex_lock(&mutexlock);
//		sleep(1);
		printf("%d\n", numero);
		sleep(1);
//		pthread_mutex_unlock(&mutexlock);
	}
	return NULL;
}

int main()
{
	pthread_t thread_print;
	int contador = 1;

//	pthread_mutex_init(&mutexlock, NULL);

	pthread_create(&thread_print, NULL, &print_num, NULL);

	for(contador = 1; contador <= 10; contador++)
	{
//		pthread_mutex_lock(&mutexlock);
		numero = contador;
		sleep(1);
///		pthread_mutex_unlock(&mutexlock);
	}

	pthread_join(thread_print, NULL);
//	pthread_mutex_destroy(&mutexlock);

	return 0;
}
