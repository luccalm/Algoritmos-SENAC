/* 6. Refaça os Exercícios 9 e 10 da Lista 01 utilizando if e else.

10. DESAFIO: Escreva um programa que faz o contrário do programa pedido no exercício anterior: imprime 1
se o inteiro digitado for par e imprime 0 caso contrário. Você só precisa usar o que foi visto em aula.

*/

#include <stdio.h>

int main() {

	int a;

	printf("Digite um numero:");
	scanf("%d", &a); 

	a = a % 2;

	if(a == 0) {
		printf("1");
	}
	
	else {
		printf("0");
	}

	return 0;
}
