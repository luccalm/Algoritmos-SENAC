/* 9. Escreva um programa que pede para o usuário digitar um inteiro e imprime apenas um número: 0 ou 1.
Imprime 0 se o inteiro digitado for par e imprime 1 caso contrário. Pense no que significa “ser par” em
termos das operações aritméticas básicas vistas em aula. */

#include <stdio.h>

int main()
	{
	int a;	
	
	printf("Digite um numero:");
	scanf("%d", &a);

	a = a % 2;

	printf("Numero: %d.\n", a);

	return 0;
	}