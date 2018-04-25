1. Quais são as vantagens e desvantagens em utilizar:

	(a) fork?

		R:
		- Vantagens: Espaço de memória protegido.
		- Desvantagens: Comunicação mais complicada.

	(b) threads?

		R:
		- Vantagens: Comunicação mais simples.
		- Desvantagens: Risco de Deadlock e perda de sincronia.


2. Quantas threads serão criadas após as linhas de código a seguir? Quantas coexistirão? Por quê?

	(a)

	```C
	void* funcao_thread_1(void *arg);
	void* funcao_thread_2(void *arg);

	int main (int argc, char** argv)
	{
		pthread_t t1, t2;
		pthread_create(&t1, NULL, funcao_thread_1, NULL);
		pthread_create(&t2, NULL, funcao_thread_2, NULL);
		pthread_join(t1, NULL);
		pthread_join(t2, NULL);
		return 0;
	}
	```

		R: 2 threads, coexistindo. Pois crio as duas (inicia), e ativo o comando pthread_join(&t1, NULL) e espero que a t1 seja terminada (código fica travado nessa linha). Então quand t1 termina vou para pthread_join(&t2, NULL), caso t2 ja tenha terminado eu termino a main, caso contrário eu espero.

	(b)
	```C
	void* funcao_thread_1(void *arg);
	void* funcao_thread_2(void *arg);

	int main (int argc, char** argv)
	{
		pthread_t t1, t2;
		pthread_create(&t1, NULL, funcao_thread_1, NULL);
		pthread_join(t1, NULL);
		pthread_create(&t2, NULL, funcao_thread_2, NULL);
		pthread_join(t2, NULL);
		return 0;
	}
	```
		R: 2 Threads, mas que não coexistem no mesmo espaço de tempo. Quando seto pthread_join(&t1, NULL) o código fica travado em até t1 terminar, sem iniciar a t2.

3. Apresente as características e utilidades das seguintes funções:

	(a) `pthread_setcancelstate()`

		R: Determina o estado de cancelabilidade de uma thread. Pode ser habilitado ou desabilitado. Caso habilitado permite que a thread obedeça a uma requisição de cancelamento. Caso contrário, a requisição entra na fila de espera até que o estado seja alterado. 

	(b) `pthread_setcanceltype()`


		R: Determina o tipo de cancelamento de uma thread. Pode ser "asynchronous" ou "deferred". Caso seja "asynchronous" a thread pode ser cancelada a qualquer momento, inclusive, imediatamente. Caso seja "deferred" a thread só pode ser cancelada quando for fazer a próxima chamada de função.
	(DICA: elas são relacionadas à função pthread_cancel().)	
