/*5. Escreva uma função que recebe um inteiro e devolve o módulo dele. Note que esse módulo é sempre
inteiro. Escreva também um programa que pede para o usuário digitar um inteiro e imprime o módulo
dele, utilizando a função como subrotina.*/

#include <stdio.h>

int funcModulo(int a);

int main() {

	int num, numMod;

	printf("Digite um numero:");
	scanf("%d", &num);

	numMod = funcModulo(num);

	printf("Modulo de %d = |%d|\n", num,numMod);

	return 0;
}

int funcModulo(num) {

	if(num < 0)
	num = num * -1;	

	return num;

}