/* Escreva um programa que pede para o usuário digitar dois inteiros e imprime o quociente e o resto da
divisão euclidiana desses inteiros. O programa deve imprimir ambas as respostas em um único printf.
Você pode supor que o usuário não tentará dividir por zero. */

#include <stdio.h>

int main()
	{
	int a,b, quoc, resto;	
	
	printf("Digite um numero:");
	scanf("%d", &a);

	printf("Digite outro numero:"); 
	scanf("%d", &b);

	quoc = a / b;
	resto = a % b;

	printf("O quociente e: %d \nE o resto e: %d \n", quoc, resto);

	return 0;
	}