/* 7. Escreva um programa que pede para o usuário digitar um inteiro e:
• imprime JOVEM se esse inteiro for menor que 18;
• imprime ADULTO se for maior ou igual a 18 e menor que 60;
• imprime IDOSO caso contrário. */

#include <stdio.h>

int main() {

	int a;

	printf("Digite um numero:");
	scanf("%d", &a); 

	if(a < 18) {
		printf("JOVEM \n");
	}
	
	if(a >= 18 && a < 60) {
		printf("ADULTO \n");
	}

	if(a >= 60) {
		printf("IDOSO \n");
	}

	return 0;
}