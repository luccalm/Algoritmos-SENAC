#include <stdio.h>

int main() {

	int num = 1, aux, tabuada, resultado, numero, max = 0, multi = 1;

	printf("numero");
	scanf("%d", &numero);

aux = numero;

while(aux > 0) {
tabuada = numero;
multi = 1;

	while(tabuada > 0) {

	resultado = num * multi;	

	printf("%d ", resultado);	

	multi = multi + 1;
	tabuada--;
	}
printf("\n");
num++;
aux--;
}



	return 0;
}