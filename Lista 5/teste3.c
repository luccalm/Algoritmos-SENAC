#include <stdio.h>

int main() {

	int numero, num1 = 0, num2 = 1, aux;

	printf("Digite um numero:");
	scanf("%d", &numero);

	while(numero > 0)
	{		
	printf("%d ", num1);
	aux = num1;
	num1 = num1 + num2;
	numero--;
	num2 = aux;
	}
printf("\n");
	return 0;
}