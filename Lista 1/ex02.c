/* 2. Escreva um programa que pede para o usuário digitar dois inteiros e imprime a diferença desses inteiros. */

#include <stdio.h>

int main() 
{

	int a,b;

	printf("Digite um numero");
	scanf("%d", &a);
	
	printf("Digite outro numero");
	scanf("%d", &b);

	a = a - b;

	printf("A diferença é: %d \n", a);

return 0;
}