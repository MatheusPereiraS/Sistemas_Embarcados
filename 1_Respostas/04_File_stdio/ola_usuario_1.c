#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *dados;
	char nome[15];
	char nomea[20];	
	char idade[3];
	char extensao[5] = ".txt"; 

	printf("Digite o seu nome: ");
	gets(nome);
	printf("Digite a sua idade: ");
	gets(idade);

	strcpy(nomea, nome);
	strcat(nomea, extensao);
	dados = fopen(nomea, "w");

	if(!dados)
	{
		printf("Erro ao criar o arquivo.\n");
		exit(-1);
	}

	fputs("Nome: ", dados);
	fputs(nome, dados);
	putc('\n',dados);
	fputs("Idade: ", dados);	
	fputs(idade, dados);
	putc(' ', dados);
	fputs("anos", dados);
	putc('\n', dados);

	fclose(dados);	
	return 0;
}
