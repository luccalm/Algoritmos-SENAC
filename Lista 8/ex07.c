/*7. Escreva uma função que recebe dois inteiros e devolve a soma deles. Note que essa soma é sempre inteira.
Escreva também um programa que pede para o usuário digitar dois inteiros e imprime a soma deles,
utilizando a função como subrotina.*/

#include <stdio.h>

int funcSomar(int a, int b);

int main() {

	int num1, num2, soma;

	printf("Digite dois inteiros:");
	scanf("%d %d", &num1, &num2);

	soma = funcSomar(num1, num2);

	printf("A soma de %d e %d = %d\n", num1, num2, soma);

	return 0;
}

int funcSomar(int num1, int num2) {

	int soma;

	soma = num1 + num2;

	return soma;

}