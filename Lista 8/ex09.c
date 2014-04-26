/* 9. Escreva uma função que recebe um inteiro não-negativo e devolve o fatorial dele. */

#include <stdio.h>

int funcFatorial(int a);

int main() {

	int num, fat;

	printf("Digite um numero:");
	scanf("%d", &num);

	fat = funcFatorial(num);

	printf("Fatorial de %d = %d\n", num, fat);


	return 0;
}

int funcFatorial(num) {

	int result = 1;

	while(num > 0)
	{
	result = result * num;
	num--;
	}

	return result;
}