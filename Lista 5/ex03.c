/* 3. Escreva um programa que pede para o usuário digitar um inteiro n e imprime todos os inteiros entre 2
e n que são primos. Note que, se n < 2, o programa simplesmente não imprime nada. */ 

#include <stdio.h>

int main() {

	int numero, i, primo, divisor;

	printf("Digite um numero:");
	scanf("%d", &numero);

	for(i = 2; i <= numero; i++)
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
		
	}


	return 0;
}