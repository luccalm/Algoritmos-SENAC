/* 4. Escreva uma função que recebe três inteiros e imprime esses inteiros em ordem crescente. Escreva também
um programa que chama essa função, passando como parâmetros três inteiros digitados pelo usuário. */

#include <stdio.h>

void funcOrdem(int a, int b, int c);

int main() {

	int a,b,c;

	printf("Digite 3 inteiros:");
	scanf("%d %d %d", &a, &b, &c);

	funcOrdem(a,b,c);

	return 0;
}

void funcOrdem(a,b,c) {

int aux;

	if(a > c)
	{
	aux = a;
	a = c;
	c = aux;	
	}

	if(b > c)
	{
	aux = b;
	b = c;
	c = aux;	
	}

	if(a > b)
	{
	aux = a;
	a = b;
	b = aux;		
	}

	printf("Ordem crescente: %d - %d - %d\n", a,b,c);

} 