/* 8• imprime a média aritmética desses inteiros se ambos forem maiores ou iguais a 5;
• imprime o menor desses inteiros caso contrário. */

#include <stdio.h>

int main() {

	int a, b, divisao;

	printf("Digite um numero:");
	scanf("%d %d", &a, &b); 

	if(a >= 5 && b >= 5) {
		divisao = (a + b) / 2;
		printf("%d \n", divisao);
		
	}
	else 
	{
		if(a > b) {
			printf("Menor numero: %d \n", b);
		}
		else {
			printf("Menor numero: %d \n", a);
		}
	}
	return 0;
}