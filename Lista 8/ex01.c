/*1. Escreva uma função que imprime todos os inteiros de 1 a 1000. Escreva também um programa que chama
essa função.*/

#include <stdio.h>

void contador();

int main() {

contador();

return 0;
}

void contador() {

int i;

for(i = 1; i <= 1000; i++)
{
printf("%d\n", i);
}

}