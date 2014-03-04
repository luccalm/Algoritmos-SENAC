/* 2. Escreva um programa que pede para o usuário digitar dois inteiros e imprime esses inteiros em ordem
crescente. Você deve utilizar um único printf. (sem contar os pedidos de digitação) */

#include <stdio.h>

int main() {

	int a, b, aux;

	printf("Digite um numero:");
	scanf("%d %d", &a, &b);

	if(a > b) {
		aux = a;
		a = b;
		b = aux;
	}

	printf("Ordem Crescente: %d,%d \n", a,b);

	return 0;
}