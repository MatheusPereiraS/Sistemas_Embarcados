#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
	int dados;
	int idade;
	char nome[50], nomea[50], comando[30] = "cat ", idadea[30];

	printf("Digite o seu nome: ");
	scanf("%s", nome);
	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	strcpy(nomea, nome);
	strcat(nomea, ".txt");

	dados = open(nomea, O_RDWR | O_CREAT, S_IRWXU);
	if(!dados)
	{
		printf("Erro ao abrir ou criar arquivo!");
		exit(-1);
	}

	sprintf(idadea, "%d", idade);

	write(dados, "Nome: ", strlen("Nome: "));
	write(dados, nome, strlen(nome));
	write(dados, "\n", 1);
	write(dados, "Idade: ", strlen("Idade: "));
	write(dados, idadea, strlen(idadea));
	write(dados, "\n", 1);

	strcat(comando, nomea);
	system(comando);

	close(dados);

	return 0;
}
