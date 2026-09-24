/*Faça um algoritmo que receba o nome e o valor de um produto qualquer, calcule e
mostre o valor das prestações, sabendo que o seu valor é dividido em 5x sem juros.*/

#include <stdio.h>

int main (){
    char nome[100];
    float valor;

    printf("Digite o nome do produto: ");
    scanf("%99[^\n]", nome);
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    float parcela = valor / 5;
    printf("O produto %s custa %.2f e pode ser parcelado em 5 vezes de %.2f\n", nome, valor, parcela);
    return 0;
}

