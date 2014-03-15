/* 6. Escreva um programa que pede para o usuário digitar 5 inteiros e imprime o menor desses inteiros. Deve
haver apenas um scanf no código e nesse scanf deve haver apenas um %d. */

#include <stdio.h>
#include <limits.h>

int main() {

	int inteiros = 0, numero, menor = INT_MAX;

	while(inteiros < 5)
	{
	printf("Digite um numero:");
	scanf("%d", &numero);
		if(menor > numero)
		{
		menor = numero;
		}
	inteiros++;
	}

	printf("O menor numero e: %d\n", menor);

	return 0;
}