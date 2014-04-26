#include <stdio.h>

int main() {

/*
	 | = 0
    /|\ = 1
   //|\\ = 2
  ///|\\\ = 3
*/
int aux, numero, barraEsq , barraDir, variavel = 0, barra = 0, espaco;

printf("Numero:");
scanf("%d",&numero);

aux = numero;

while(variavel < numero) {

barraDir = barra;
barraEsq = barra;

espaco = aux;

while(espaco > 0) {
	printf(" ");
	espaco = espaco - 1;
}

while(barraEsq > 0) 
	{ 
	printf("/"); 
	barraEsq = barraEsq - 1;
	}
printf("|");
while(barraDir > 0) 
	{ 
	printf("\\");
	barraDir = barraDir - 1; 
	}
printf("\n");
variavel++;
barra++;
aux--;
}
	return 0;
}