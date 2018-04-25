#include "num_caracs.h"
#include <string.h>

int num_caracs(char *string)
{
	int contador = 0;
	int limite = 1000;
	int contagem = 0;

	for(contador = 0; limite; contador++)
	{
		if(string[contador] != '\0')
		{
			contagem++;
		}
		else
			break;
	}
	return contagem;
}
