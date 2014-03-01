/* 3. Escreva um programa que pede para o usuário digitar um inteiro e:
• imprime 0 se esse inteiro for menor que zero;
• imprime 10 se esse inteiro for maior que dez;
• simplesmente imprime esse inteiro caso contrário. */

#include <stdio.h>

int main() {

	int a;

	printf("Digite um numero:");
	scanf("%d", &a); 

	if(a < 0) {
		printf("0 \n");
	}

	if(a > 10) {
		printf("10 \n");
	}

	if(a > 0 && a < 10) {
		printf("%d \n", a);
	}

	return 0;
}