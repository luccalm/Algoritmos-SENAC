#include <stdio.h>

int main() {

	int numero, controle, linhas, colunas;

	printf("Digite um numero:");
	scanf("%d", &numero);

	controle = numero;

	while(controle > 0 )
	{
	linhas = numero;
	colunas = numero;	

	while(linhas > 0)
	{
	printf("+---");
	linhas--;	
	}	
	printf("+\n");
	printf("|");
	while(colunas > 0)
	{
	printf("   |");	
	colunas--;
	}	
	printf("\n");
	controle--;
	}

	linhas = numero;
	while(linhas > 0)
	{
	printf("+---");
	linhas--;	
	}
	printf("+");

	printf("\n");
	return 0;
}