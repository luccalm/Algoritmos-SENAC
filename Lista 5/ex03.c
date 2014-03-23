/* 3. Escreva um programa que pede para o usuário digitar um inteiro n e imprime todos os inteiros entre 2
e n que são primos. Note que, se n < 2, o programa simplesmente não imprime nada. */ 

#include <stdio.h>

int main() {

	int numero, i = 2, primo, divisor;

	printf("Digite um numero:");
	scanf("%d", &numero);

	while(i <= numero)
	{
	primo = 0;
	divisor = 2;	
		while(primo == 0 && divisor < i)
		{
			if(i % divisor == 0)
			{
			primo = 1;
			}	
			else
			{
			divisor++;
			}
		}

		if(primo == 0)
		{
		printf("%d \n", i);
		}
	i++;	
	}


	return 0;
}