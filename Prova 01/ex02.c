#include <stdio.h>

int main() {

	int num1 = 0, num2 = 1, aux, numero;

	printf("Digite um numero:");
	scanf("%d", &numero);

	while(numero > 0)
	{
	printf("%d - ", num1);	
	aux = num1;
	num1 = num1 + num2;
	num2 = aux;
	numero--;
	}	

	return 0;
}