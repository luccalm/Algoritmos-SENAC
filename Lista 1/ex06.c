/* 6. Escreva um programa que pede para o usuário digitar as duas dimensões de um retângulo e imprime
o perímetro e a área desse retângulo. O programa deve imprimir ambas as respostas em um único printf */


#include <stdio.h>

int main()
	{
	int a,b,perim,area;	
	
	printf("Digite um numero:");
	scanf("%d", &a);

	printf("Digite outro numero:");
	scanf("%d", &b);

	perim = a * 2 + b * 2;
	area = a*b;

	printf("O perimetro e: %d \nE a area e: %d.\n", perim,area);

	return 0;
	}