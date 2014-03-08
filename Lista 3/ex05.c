/* Escreva um programa que pede para o usuário digitar um inteiro entre 0 e 9 e imprime o nome desse inteiro
por extenso. Ou seja, imprime ZERO, UM, DOIS, etc. Se o inteiro não estiver nesse intervalo, o programa
deve imprimir ENTRADA INVÁLIDA. Faça uma versão utilizando if/else e uma versão utilizando switch. */

#include <stdio.h>

int main() {

	int a;

	printf("Digite um numero:");
	scanf("%d",&a);

	switch(a)
	{
	case 0:
	printf("ZERO");
	break;

	case 1:
	printf("UM");
	break;

	case 2:
	printf("DOIS");
	break;

	case 3:
	printf("TRES");
	break;

	case 4:
	printf("QUATRO");
	break;

	case 5:
	printf("CINCO");
	break;

	case 6:
	printf("SEIS");
	break;

	case 7:
	printf("SETE");
	break;

	case 8:
	printf("OITO");
	break;

	case 9:
	printf("NOVE");
	break;	
	
	default:
	printf("ENTRADA INVALIDA");
	}

	return 0;
}