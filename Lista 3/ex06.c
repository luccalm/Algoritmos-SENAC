/* 6. Refaça o Exercício 8 da Lista 01 utilizando apenas variáveis do tipo float. */

/* Escreva um programa que pede para o usuário digitar dois inteiros e imprimir qual porcentagem do segundo
o primeiro representa. Por exemplo: se o usuário digita 6 e 12, o programa imprime Porcentagem: 50%,
pois 6 é a metade de 12. Você pode supor que o segundo não é zero.
Calcular a porcentagem consiste em uma simples “regra de três”. Existem duas alternativas:
(a) dividir o primeiro pelo segundo e multiplicar esse quociente por 100;
(b) multiplicar o primeiro por 100 e dividir esse produto pelo segundo.
Como a divisão não é exata, as alternativas não são equivalentes. Escreva um programa para cada uma.
Qual delas é melhor? */

#include <stdio.h>

int main() {

float num1,num2,resultado;

	printf("Digite um numero:");
	scanf("%f %f", &num1, &num2);

	resultado = (num1 / num2) * 100;

	printf("Resultado: %0.2f", resultado);

	return 0;
}