/*Faça um algoritmo que receba um número e escreva o valor do seu
quadrado*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, quadrado;
    printf("Digite um número: ");
    scanf("%d", &numero);
    quadrado = numero * numero;
    printf("O quadrado do número é: %d\n", quadrado);
    return 0;
}