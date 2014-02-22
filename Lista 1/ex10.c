/* 10. DESAFIO: Escreva um programa que faz o contrário do programa pedido no exercício anterior: imprime 1
se o inteiro digitado for par e imprime 0 caso contrário. Você só precisa usar o que foi visto em aula. */


#include <stdio.h>

int main()
	{
	int a;	
	
	printf("Digite um numero:");
	scanf("%d", &a);

	a = (a + 1) % 2;

	printf("Numero: %d.\n", a);

	return 0;
	}