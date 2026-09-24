/*Escreva um algoritmo que leia dois números e imprima a soma, produto e
diferença e divisão. Suponha que os dois números são diferentes de zero.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num1, num2, soma, produto, diferenca, divisao;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    soma = num1 + num2;
    produto = num1 * num2;
    diferenca = num1 - num2;
    divisao = num1 / num2;
    printf("A soma é: %.2f\n", soma);
    printf("O produto é: %.2f\n", produto);
    printf("A diferença é: %.2f\n", diferenca);
    printf("A divisão é: %.2f\n", divisao);
    return 0;
}