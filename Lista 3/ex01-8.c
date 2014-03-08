/* 1. Refaça os Exercícios 7 e 8 da Lista 02 utilizando o operador &&. */

/* 8. Escreva um programa que pede para o usuário digitar dois inteiros e:
• imprime a média aritmética desses inteiros se ambos forem maiores ou iguais a 5;
• imprime o menor desses inteiros caso contrário. */

#include <stdio.h>

int main() {

	int a,b;

	printf("Digite um numero:");
	scanf("%d %d", &a, &b);

	if(a >= 5 && b >= 5)
	{
		a = (a + b) / 2;
		printf("Media: %d\n",a);	

	}
	else
	{
		if(a > b)
		{
			printf("Menor: %d\n",b);
		}
		else
		{
			printf("Menor: %d\n",a);
		}
	}

	return 0;
}