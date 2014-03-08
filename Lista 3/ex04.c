/* 4. Escreva um programa que pede para o usuário digitar uma opção dentre 1, 2, 3, 4 e dois inteiros e imprime
o resultado da operação correspondente à opção:
(1) soma;
(2) diferença;
(3) multiplicação;
(4) quociente.
Faça uma versão utilizando if/else e uma versão utilizando switch. Você deve utilizar o tipo float
para obter um quociente não-arredondado, mas não pode utilizar esse tipo para armazenar os operandos. */

#include <stdio.h>

int main() {

	int a, num1, num2, resultado;
	float quoc;

	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Quociente\n");
	printf("Digite a opcao desejada:\n");
	scanf("%d", &a);

	printf("Digite um numero:");
	scanf("%d", &num1);

	printf("Digite outro numero:");
	scanf("%d", &num2);

	switch(a)
	{
	case 1:
	resultado = num1 + num2;
	printf("\nA soma de %d e %d e: %d\n", num1, num2, resultado);
	break;

	case 2:
	resultado = num1 - num2;
	printf("\nA subtracao de %d por %d e: %d\n", num1,num2,resultado);
	break;

	case 3:
	resultado = num1 * num2;
	printf("\nA multiplicao de %d por %d e: %d\n", num1,num2,resultado);
	break;

	case 4:
	quoc = (float)num1 / num2;
	printf("\nO quociente de %d por %d e: %0.2f\n",num1,num2,quoc);
	break;

	default:
	printf("OPCAO INVALIDA\n");
	break;



	}





	return 0;
}