/* 4. Refaça o Exercício 4 da Lista 03 da seguinte maneira: em vez de encerrar quando o usuário digita uma
opção inválida (ou seja, que não é 1, 2, 3 ou 4), o programa deve pedir para o usuário digitar a opção
novamente. E deve continuar pedindo até que o usuário digite uma opção válida. */


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

	int opcao = 0, num1, num2;
	float quociente;

	while(opcao < 1 || opcao > 4)
	{
	printf("1 - Soma\n2 - Diferenca\n3 - Multiplicacao\n4 - Quociente\n");
	scanf("%d", &opcao);
	}

	printf("Digite dois numeros:");
	scanf("%d %d", &num1, &num2);

	switch(opcao)
	{
	case 1:
	printf("A soma de %d e %d e %d\n", num1,num2, num1+num2);
	break;

	case 2:
	printf("A diferenca de %d e %d e %d\n", num1,num2, num1-num2);
	break;

	case 3:
	printf("A multiplicacao de %d e %d e %d\n", num1,num2,num1*num2);
	break;

	case 4:	
	quociente = (float) num1 / num2;
	printf("O quociente de %d e %d e %0.2f", num1,num2,quociente);
	break;

	}

	return 0;
}