/* 8. Escreva um programa que pede para o usuário digitar dois inteiros não-negativos, a e b, e imprime o valor
de a b , ou seja, a elevado a b. Você deve utilizar apenas o que foi visto em aula */

#include <stdio.h>

int main() {

	int int1, int2, resultado = 1;

	printf("Digite dois numeros:");
	scanf("%d %d", &int1, &int2);

	while(int2 > 0)
	{
	resultado = resultado * int1;	
	int2--;	
	}

	printf("Resultado: %d", resultado);

return 0;
}