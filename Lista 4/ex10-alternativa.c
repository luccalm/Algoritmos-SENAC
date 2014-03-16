/* 10. Escreva um programa que pede para o usuário digitar um inteiro n maior ou igual a 2 e imprime uma
frase dizendo se esse inteiro é um número primo ou não. */

#include <stdio.h>

int main() {


	int numero, divisor = 2, dividiu = 0;


	printf("Digite um numero >= a 2:");
	scanf("%d", &numero);

	while(dividiu == 0 && divisor < numero)
		{			
		if(numero % divisor == 0)
			{
			dividiu++;	
			}	
		divisor++;	
		}


	if(dividiu)
	{
		printf("Numero %d nao e primo.\n", numero);
	}
	else
	{
		printf("Numero %d e primo.\n", numero);
	}

	return 0;
}