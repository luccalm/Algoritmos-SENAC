#include <stdio.h>

int main() {

	int numero, soma = 0, media = 0;

	printf("Digite um numero:");
	scanf("%d", &numero);

	while(numero > 0)
	{
	soma = soma + numero;
	media = soma / 2;
	scanf("%d", &numero);	
	}

	printf("Soma: %d\nMedia:%d", soma,media);

	return 0;
}