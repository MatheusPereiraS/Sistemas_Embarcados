#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	FILE *dados;
	char  nome[15], idade[3], nomea[20], extensao[5] = ".txt";
	
	strcpy(nome, argv[1]);
	strcpy(idade, argv[2]);
	
	strcpy(nomea, nome);
	strcat(nomea, extensao);

	dados = fopen(nomea, "w");
	if(!dados)
	{
		printf("Erro ao criar arquivo!\n");
		exit(-1);
	}

	fputs("Nome: ", dados);
	fputs(nome, dados);
	putc('\n', dados);
	fputs("Idade: ", dados);
	fputs(idade, dados);
	fputs(" anos", dados);
	putc('\n', dados);

	fclose(dados);	
	
	return 0;
}
