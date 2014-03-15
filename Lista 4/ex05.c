/* 5. Escreva um programa que pede para o usuário digitar 5 inteiros e imprime a soma desses inteiros. Deve
haver apenas um scanf no código e nesse scanf deve haver apenas um %d. */

#include <stdio.h>

int main() {

	int inteiros = 0, numero, soma = 0;

	while(inteiros < 5)
	{
	printf("Digite um numero:");
	scanf("%d", &numero);	
	soma = numero + soma;
	inteiros++;
	}
	printf("A soma e: %d \n", soma);



	return 0;
}