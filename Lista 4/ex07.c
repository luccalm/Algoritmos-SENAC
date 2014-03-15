/* . Escreva um programa que pede para o usuário digitar 5 inteiros e imprime o maior desses inteiros. Deve
haver apenas um scanf no código e nesse scanf deve haver apenas um %d. */


#include <stdio.h>
#include <limits.h>

int main() {

	int inteiros = 0, numero, maior = INT_MIN;

	while(inteiros < 5)
	{
	printf("Digite um numero:");
	scanf("%d", &numero);
		if(maior < numero)
		{
		maior = numero;
		}
	inteiros++;
	}

	printf("O menor numero e: %d\n", maior);

	return 0;
}