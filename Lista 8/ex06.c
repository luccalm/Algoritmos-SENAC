/*6. Escreva uma função que recebe um inteiro não-nulo n e devolve o resultado da divisão 1/n. Note que esse
resultado pode não ser inteiro. Escreva também um programa que pede para o usuário digitar um inteiro
não-nulo n e imprime o resultado da divisão 1/n, utilizando a função como subrotina.*/

#include <stdio.h>

float funcDivisao(int num);

int main() {

	float a;
	int num;

	printf("Digite um numero:");
	scanf("%d", &num);

	a = funcDivisao(num);

	printf("%0.2f", a);

	return 0;
}

float funcDivisao(num) {

	float result;

	result = (float) 1 / num;

	return result;

}

