/* . Escreva um programa que pede para o usuário digitar inteiros positivos e imprime a soma deles. A diferença
deste exercício para o Exercício 05 da Lista 04 é que neste a quantidade de inteiros é indeterminada: o
fim da digitação é indicado por um inteiro não-positivo. Se o primeiro inteiro já for não-positivo, a soma
impressa deve ser zero. Atenção: cuidado para não incluir o último na soma. */

#include <stdio.h>

int main() {

	int num1 = 1, soma = 0;

	printf("Digite um numero:");
	scanf("%d", &num1);
	while(num1 > 0)
	{
	soma = soma + num1;
	printf("Digite um numero:");
	scanf("%d", &num1);
	} 

	printf("A soma e: %d\n", soma);
	
	return 0;
}