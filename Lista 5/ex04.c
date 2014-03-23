/* 4. Escreva um programa que pede para o usuário digitar um inteiro positivo n e imprime a tabuada limitada
por esse inteiro. Por exemplo, se o usuário digitou 5 o programa deve imprimir:

1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25

Como o exemplo acima demonstra, você não precisa se preocupar com alinhamento. */ 

#include <stdio.h>

int main() {

int i = 1,j,numero;

printf("Digite um numero:");
scanf("%d", &numero);

	while(i <= numero)
	{
		j = 1;
		while(j <= numero)
		{
		printf("%d ", i * j);	
		j++;
		}
		printf("\n");
	i++;
	}	
	


	

	return 0;
}