/* 5. Escreva um programa que pede para o usuário digitar um inteiro maior ou igual a 2 e imprime a fatoração
dele. Por exemplo: se o usuário digitou 24, imprime 2.2.2.3. Se o usuário digitou 20, imprime 2.2.5. */

#include <stdio.h>

int main() {

int numero, divisor = 2;

printf("Digite um numero >= 2:");
scanf("%d", &numero);

//numero = numero / divisor;
//printf("%d", numero);

	while(numero > 1)
	{
		if(numero % divisor == 0)	
		{
		printf("%d.", divisor);
		numero = numero / divisor;
		}
		else
		{
		divisor++;	
		}	
	} 
	printf("\n");

return 0;
}
