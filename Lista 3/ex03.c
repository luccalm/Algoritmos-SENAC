/* Escreva um programa que pede para o usuário digitar um ano, imprime BISSEXTO se esse ano for bissexto
e imprime NORMAL caso contrário. */

#include <stdio.h>

int main() {

	int ano;

	printf("Digite um ano:");
	scanf("%d", &ano);

	if(ano % 4 == 0)
		{
		if(ano % 100 != 0 || ano % 400 == 0)
			{
			printf("BISSEXTO\n");	
			}	
		}
	else
	{
	printf("NORMAL\n");
	}

	return 0;
}