/* 1. Escreva um programa que pede para o usuário digitar um inteiro não-negativo e imprime um desenho que
obedece ao seguinte padrão: se o inteiro for 0, imprime
|
se for 1, imprime
 |
/|\
se for 2, imprime
  | 
 /|\
//|\\
se for 3, imprime
   |
  /|\
 //|\\
///|\\\
e assim em diante */

#include <stdio.h>

int main() {

int linhas, barras = 0, barraEsq, barraDir, espaco;

printf("Digite um numero:");
scanf("%d", &linhas);

	while(linhas > 0)
	{	
	barraEsq = barras;
	barraDir = barras;
	espaco = linhas;
		while(espaco > 0)
		{
		printf(" ");
		espaco--;	
		}
		while(barraEsq > 0)
		{
		printf("/");
		barraEsq--;	
		}	
		printf("|");
		while(barraDir > 0)
		{
		printf("\\");
		barraDir--;	
		}
	printf("\n");
	barras++;
	linhas--;	
	}


//Resolvendo!
	
	return 0;
}