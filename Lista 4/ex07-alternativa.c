/* . Escreva um programa que pede para o usuário digitar 5 inteiros e imprime o maior desses inteiros. Deve
haver apenas um scanf no código e nesse scanf deve haver apenas um %d. */


#include <stdio.h>
#include <limits.h>

int main() {

	int inteiros = 0, numero, maior, var = 0;

	while(inteiros < 5)
	{
	printf("Digite um numero:");
	scanf("%d", &numero);
	if(var == 0)
	{
		maior = numero;
		var = 1;
	}
		if(maior < numero)
		{
		maior = numero;
		}
	inteiros++;
	}

	printf("O menor numero e: %d\n", maior);

	return 0;
}