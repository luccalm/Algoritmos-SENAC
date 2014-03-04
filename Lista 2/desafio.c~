/* 2. Escreva um programa que pede para o usuário digitar dois inteiros e imprime esses inteiros em ordem
crescente. Você deve utilizar um único printf. (sem contar os pedidos de digitação)
DESAFIO: Como trocar os valores de duas variáveis sem utilizar variáveis auxiliares */

#include <stdio.h>

int main() {

	int a, b;

	printf("Digite um numero:");
	scanf("%d %d", &a, &b);

	//EXEMPLO com A = 7 e B = 3:
	//a = 7
	//b = 3
	
	a = a + b; //a = 10 -> a(7)+ b(3)
	b = a - b; //b = 7 -> a(10) - b(3)
	a = a - b; //a = 3 -> a(10) - b(7)

	if(a < b) {
	printf("Ordem Crescente: %d,%d \n", a,b);
	}
	else {
	printf("Ordem Crescente: %d,%d \n", b,a);
	}

	return 0;
}
