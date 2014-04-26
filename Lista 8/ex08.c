/* 8. Escreva uma função que recebe dois inteiros, sendo o segundo não-nulo, e devolve o quociente deles. Note
que esse quociente pode não ser inteiro. Escreva também um programa que pede para o usuário digitar
dois inteiros e imprime o quociente deles, utilizando a função como subrotina. */

#include <stdio.h>

float funcQuoc(int a , int b);

int main() {

float quoc;
int num1,num2;

printf("Digite dois inteiros:");
scanf("%d %d", &num1, &num2);

quoc = funcQuoc(num1,num2);

printf("%0.2f", quoc);

}

float funcQuoc(num1 , num2) {

	float quoc;

	quoc = (float) num1 / num2;

	return quoc;
}
