/* 5. Escreva um programa que pede para o usuário digitar um inteiro e imprime o quadrado desse inteiro. */


#include <stdio.h>

int main()
	{
	int a;	
	
	printf("Digite um numero:");
	scanf("%d", &a);

	a = a * a;

	printf("O quadrado e: %d \n", a);

	return 0;
	}