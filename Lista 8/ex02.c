/*2. Escreva uma função que devolve 3.14159, uma aproximação de π. Escreva também um programa que pede
para o usuário digitar um inteiro não-negativo representando um raio e imprime o perímetro e a área do
círculo correspondente a esse raio, utilizando a função como subrotina*/

#include <stdio.h>

int pi();
int funcArea(int a, int b);
int funcPerim(int a, int b);

int main() {

	int n, area, perim , p;

	printf("Digite um numero:");
	scanf("%d", &n);

	p = pi();

	area = funcArea(n, p);
	perim = funcPerim(n, p);

	printf("Area: %d\nPerimetro:%d\n", area,perim);

	return 0;
}

int pi() {

	return 3.14159;

}

int funcArea(n, pi) {

int a;

a = pi * (n*n);

return a;

}

int funcPerim(n, pi) {

int p;

p = 2 * pi * n;

return p;
}