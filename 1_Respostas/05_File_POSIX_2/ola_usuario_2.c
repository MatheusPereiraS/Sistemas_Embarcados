#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "num_caracs.h"

int main(int argc, char **argv)//** argv = *argv[]
{
	int dados, tam_idade=0, tamanho_nome = 0, contador1 = 0, contador2 = 0;///Descritor de arquivo.
	char *nome, *nomea, *idade, *comando;

	tamanho_nome = num_caracs(argv[1]);
//	nome = (char *) malloc(tamanho_nome); 
	nomea = (char *) malloc(tamanho_nome+4);

	nome = argv[1];

	for(contador1 = 0; contador1 < tamanho_nome; contador1++)
	{
		nomea[contador1] = argv[1][contador1];
	}//Copiando o nome para o nome do arquivo.

	nomea[tamanho_nome] = '.';
	nomea[tamanho_nome+1] = 't';
	nomea[tamanho_nome+2] = 'x';
	nomea[tamanho_nome+3] = 't';//Copiando a extensao ".txt"

	tam_idade = num_caracs(argv[2]);
//	idade = (char *) malloc(tam_idade);
	idade = argv[2];

	dados = open(nomea, O_RDWR | O_CREAT , S_IRWXU);//Abri (cria) arquivo para o propitario

	write(dados, "Nome: ", num_caracs("Nome: "));
	write(dados, nome, tamanho_nome);
	write(dados, "\n", 1);
	write(dados, "Idade: ", num_caracs("Idade: "));
	write(dados, idade, tam_idade);
	write(dados, "\n", 1);

	comando = (char *) malloc(8+tamanho_nome);

	comando[0] = 'c';
	comando[1] = 'a';
	comando[2] = 't';
	comando[3] = ' ';

	for(contador2 = 0; contador2 <= (tamanho_nome+3); contador2++)
	{
		comando[contador2+4] = nomea[contador2];
	}
	system(comando);

	free(comando);
//	free(idade);
	free(nomea);
//	free(nome);

	close(dados);

	return 0;
}
