/* 1. Refaça os Exercícios 7 e 8 da Lista 02 utilizando o operador &&. */

/* 7. Escreva um programa que pede para o usuário digitar um inteiro e:
• imprime JOVEM se esse inteiro for menor que 18;
• imprime ADULTO se for maior ou igual a 18 e menor que 60;
• imprime IDOSO caso contrário. */

#include <stdio.h>

int main() {

	int a;

	printf("Digite um numero:");
	scanf("%d", &a);

	if(a < 18)
	{
	printf("Jovem\n");
	}
	if(a >= 18 && a < 60)
	{
	printf("Adulto\n");
	}	
	if(a >= 60)
	{
	printf("Idoso\n");	
	}

	return 0;
}