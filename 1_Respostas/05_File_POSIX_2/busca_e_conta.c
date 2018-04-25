#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "bib_arqs.h"
#include "num_caracs.h"

int main(int argc, char **argv)
{
	char *copia;
	int tam_arq = 0;
	int tam_palavra = 0;
	int contador1 = 0, contador2 = 0;
	int num_letras = 0;
	int num_palavras = 0;

	tam_arq = tam_arq_texto(argv[2]);//vejo o tamanho do arquivo para alocar memoria.

	copia = (char *) malloc(tam_arq);//aloco mem.

	tam_palavra = num_caracs(argv[1]);//vejo o tamanho da palavra para ver se tenho a quantidade de caracteres iguais.

	le_arq_texto(argv[2], copia);//copio a frase do arquivo.

	for(contador1 = 0; contador1 <= tam_arq; contador1++)
	{
//		printf("Caracter arquivo: %c \n", copia[contador1]);

			if(copia[contador1] == argv[1][contador2])//texto se o caracter corrente do arquivo é igual ao corrente da busca
			{
			//	printf("Caracter busca: %c \n", argv[1][contador2]);
				contador2++;//se igual, incremento a busca  para a prox letra.

				if(contador2 == tam_palavra)//vejo se a busca tem uma quantida
				{
					contador2 = 0;
					num_palavras++;
				}
			}

	}

	printf("'%s' ocorre %d vezes no arquivo '%s'.\n", argv[1], num_palavras, argv[2] );

	free(copia);

	return 0;
}
