/* 9. Escreva um programa que pede para o usuário digitar três inteiros e imprime esses inteiros em ordem
crescente. Você deve utilizar um único printf. (sem contar os pedidos de digitação) */

#include <stdio.h>

int main() {

	int a, b, c, aux;

	printf("Digite um numero:");
	scanf("%d %d %d", &a, &b, &c);

	if(a > c) 
	{
		aux = a;
		a = c;
		c = aux;
	}

	if(a > b)
	{
		aux = a;
		a = b;
		b = aux;
	} 

	if(b > c)
	{
		aux = b;
		b = c;
		c = aux;
	}

	printf("Ordem Crescente: %d,%d,%d \n", a,b,c);

	return 0;
}