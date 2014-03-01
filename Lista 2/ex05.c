/* 5. Escreva um programa que pede para o usuário digitar dois inteiros e:
• imprime ENTRADA INVALIDA se o segundo for igual a 0;
• imprime o quociente e o resto da divisão euclidiana desses inteiros caso contrário. */

#include <stdio.h>

int main() {

	int a, b, quo, resto;

	printf("Digite um numero:");
	scanf("%d %d", &a, &b); 

	if(b == 0) {
		printf("ENTRADA INVALIDA");
	}
	
	else {
		quo = a / b;
		resto = a % b;
		printf("Quoc: %d Resto: %d \n", quo, resto);
	}

	return 0;
}