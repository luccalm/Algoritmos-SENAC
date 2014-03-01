/* 4. Escreva um programa que pede para o usuário digitar um inteiro e:
• imprime APROVADO se esse inteiro for maior ou igual a 6;
• imprime REPROVADO caso contrário. */

#include <stdio.h>

int main() {

	int a;

	printf("Digite um numero:");
	scanf("%d", &a); 

	if(a >= 6) {
		printf("APROVADO \n");
	}
	
	else {
		printf("REPROVADO \n");
	}

	return 0;
}