/* Refaça o Exercício 7 da Lista 02 adicionando a seguinte funcionalidade: se o usuário digitar uma idade
menor que 0 ou maior que 100, o programa deve imprimir uma mensagem de erro. Utilize o operador ||. */

#include <stdio.h>

int main() {

	int a;

	printf("Digite A:");
	scanf("%d", &a);

	if(a < 0 || a > 100)
	{
		printf("ERRO 404\n");
	}

	if(a < 18 && a >= 0)
	{
		printf("Jovem\n");
	}
	if(a >= 18 && a < 60)
	{
		printf("Adulto\n");
	}	
	
	if(a >= 60 && a <= 100)
	{
		printf("Idoso\n");	
	}

	return 0;
}