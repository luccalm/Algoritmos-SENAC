/* 10. Escreva uma função que recebe dois inteiros não-negativos, a e b, e devolve o resultado da potência a b . */

#include <stdio.h>

int funcPotencia(int a, int b);

int main() {

	int num1,num2,resultado;

	printf("Digite dois numeros:");
	scanf("%d %d", &num1, &num2);

	resultado = funcPotencia(num1, num2);

	printf("O resultado de %d potencia %d = %d\n", num1, num2, resultado);

	return 0;
}

int funcPotencia(num1, num2) {

int result = 1;

while(num2 > 0)
{
	result = result * num1;
	num2--;
}

return result;
}