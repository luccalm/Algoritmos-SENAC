/* 8. Escreva um programa que pede para o usuário digitar dois inteiros e imprimir qual porcentagem do segundo
o primeiro representa. Por exemplo: se o usuário digita 6 e 12, o programa imprime Porcentagem: 50%,
pois 6 é a metade de 12. Você pode supor que o segundo não é zero.
Calcular a porcentagem consiste em uma simples “regra de três”. Existem duas alternativas:
(a) dividir o primeiro pelo segundo e multiplicar esse quociente por 100;
(b) multiplicar o primeiro por 100 e dividir esse produto pelo segundo. */


#include <stdio.h>

int main()
	{
	float a,b,porcentagem;	
	
	printf("Digite um numero:");
	scanf("%f", &a);

	printf("Digite outro numero:");
	scanf("%f", &b);

	porcentagem = (a / b) * 100;

	printf("A Porcentagem e: %.0f.\n", porcentagem);

	return 0;
	}