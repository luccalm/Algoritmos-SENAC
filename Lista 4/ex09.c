/* 9. Escreva um programa que pede para o usuário digitar um inteiro não-negativo n e imprime o valor de n!,
ou seja, o fatorial de n. Você deve utilizar apenas o que foi visto em aula */

#include <stdio.h>

int main() {

int numero, resultado = 1;

	printf("Digite um numero:");
	scanf("%d", &numero);

	while(numero > 0)
	{
	resultado = resultado * numero;
	numero--;	
	}

	printf("Resultado:%d\n", resultado);


	return 0;
}