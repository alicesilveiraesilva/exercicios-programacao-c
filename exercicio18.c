/*Faça um programa que receba a idade da pessoa e retorne maioridade ou nao*/

#include <stdio.h>
int main()
{
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
        if (idade >= 18)
    {
        printf("A pessoa é maior de idade.\n");
        printf("Idade: %d\n", idade);}
    else
    {
        printf("A pessoa é menor de idade.\n");
        printf("Idade: %d\n", idade);
    }   
}