//Ex 01

#include <stdio.h>

int main() {

int notaAv, notaPro;
float media;

printf("Digite a nota da Av e do Pro");
scanf("%d %d", &notaAv, &notaPro);

if(notaAv > 10)
notaAv = 10;
if(notaAv < 0)	
notaAv = 0;

if(notaPro > 10)
notaPro = 10;
if(notaPro < 0)
notaPro = 0;

if(notaAv < 6)
{
printf("Reprovado em Avaliacao");	
}	

if(notaPro < 6)
{
printf("Reprovado em Projeto");
}

if(notaAv >= 5 && notaPro >= 5)
{
media = (float) notaAv + notaPro;
if(media > 6)
printf("Aprovado");
else
printf("Reprovado");	
}

return 0;

}