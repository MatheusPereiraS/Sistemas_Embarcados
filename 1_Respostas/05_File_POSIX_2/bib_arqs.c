#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int tam_arq_texto(char *nome_arquivo)
{
	int arquivo;
	int num_bytes = 0;
	char caracter;

	arquivo = open (nome_arquivo, O_RDONLY);
	if(!arquivo)
	{
		printf("Erro ao ler arquivo!\n");
		exit(-1);
	}

	while((read(arquivo, &caracter, 1)) != 0)
	{
		num_bytes = num_bytes+1;
	}

	close(arquivo);

	return num_bytes;
}

void le_arq_texto(char *nome_arquivo, char *conteudo)
{
	int arquivo;
	char caracter;
	int posicao = 0;

	arquivo = open(nome_arquivo, O_RDWR | O_CREAT, S_IRWXU);
	if(!arquivo)
	{
		printf("Erro ao ler arquivo!\n");
		exit(-1);
	}

	while(read(arquivo, &caracter, 1) != 0)
	{
		conteudo[posicao] = caracter;
		posicao++;
	}

	close(arquivo);

	}

//int main()
//{
//	char *string;
//	int x = tam_arq_texto("Matheus.txt");
//	printf("%d\n", x);
//
//	string = (char *) malloc(x);
//
//	le_arq_texto("Matheus.txt", string);
//
//	printf("%s", string);
//
///	free(string);
//	return 0;
//}
