/* 3. Escreva um programa que imprime todos os inteiros pares entre 1 e 1000 (inclusive). */

#include <stdio.h>

int main() {

	int a = 1;

	while(a <= 1000)
	{
		if(a % 2 == 0)
		{
		printf("%d\n", a);	
		}
	a++;	
	}


	return 0;
}