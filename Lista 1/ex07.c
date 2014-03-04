/* 7. Escreva um programa que pede para o usuário digitar um inteiro e imprime o inverso desse inteiro. Ou
seja, se o usuário digita 10, o programa imprime −10. Se digita −42, imprime 42.
O inverso de um valor pode ser obtido utilizando - como operador unário. Por exemplo, para inverter o
valor de uma variável x você pode usar a atribuição x = -x.
Mas note que você não precisa conhecer esse uso do operador para fazer o exercício. De que outras
maneiras você pode inverter um número? */


#include <stdio.h>

int main()
	{
	int a,b;	
	
	printf("Digite um numero:");
	scanf("%d", &a);

	b = a - a * 2;

	printf("O inverso é: %d.\n", b);

	return 0;
	}