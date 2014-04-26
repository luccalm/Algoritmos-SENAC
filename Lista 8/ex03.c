/* 3. Escreva uma função que recebe um inteiro maior ou igual a 2, imprime PRIMO se esse inteiro for primo e
imprime COMPOSTO caso contrário. Escreva também um programa que chama essa função, passando como
parâmetro um inteiro digitado pelo usuário. */

#include <stdio.h>

int ehprimo(int a);

int main() {

	int n,a;

	printf("Digite um numero >= 2:");
	scanf("%d", &n);

	a = ehprimo(n);

	if(a == 1)
	{
	printf("%d nao e primo\n", n);	
	}
	else
	{
	printf("%d e primo\n", n);	
	}

	return 0;
}

int ehprimo(int n) {

int primo = 0, i;

	for(i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
		primo = 1;
		break;	
		}
	}

return primo;

}