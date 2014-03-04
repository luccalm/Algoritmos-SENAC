/* 1. Escreva um programa que pede para o usuário digitar um inteiro e imprime o módulo desse inteiro. */

#include <stdio.h>

int main() {

	int a;

	printf("Digite um numero:");
	scanf("%d", &a);

	if(a < 0) 
	{
		a = -a;
		printf("Módulo: %d \n", a);
	}
	else 
	{
	printf("Módulo: %d \n", a);
	}

	return 0;
}