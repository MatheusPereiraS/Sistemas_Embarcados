#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bib_arqs.h"

int tam_arq_texto(char *nome_arquivo)
{
	FILE *texto;
	char caracter;
	int num_bytes = 0;

	texto = fopen(nome_arquivo, "r");
	if(!texto)
	{
		printf("Erro ao ler arquivo!\n");
		exit(-1);
	}

	while((caracter = getc(texto)) != EOF)
	{
		num_bytes = num_bytes + 1;
	}

	fclose(texto);

	return num_bytes;
}

void le_arq_texto(char *nome_arquivo, char *conteudo)
{
	FILE *texto;
	int tam_arq = 0;

	texto = fopen(nome_arquivo, "r");
	if(!texto)
	{
		printf("Erro ao ler arquivo!\n");
		exit(-1);
	}

	tam_arq = tam_arq_texto(nome_arquivo);
	fread(conteudo, sizeof(char), tam_arq, texto);
	conteudo[tam_arq] = '\0';
 
	fclose(texto);
}
