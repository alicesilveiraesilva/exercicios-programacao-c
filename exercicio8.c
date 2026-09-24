/*Faça um algoritmo que receba o salário base e a matrícula de um
funcionário, calcule e mostre a sua matrícula e o salário a receber,
sabendo-se que esse funcionário tem gratificação de 5% sobre seu salário
base e paga 10% de imposto sobre tudo que recebe.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float salario_base, gratificacao, imposto, salario_receber;
    int matricula;
    printf("Digite a matrícula do funcionário: ");
    scanf("%d", &matricula);
    printf("Digite o salário base do funcionário: ");       
    scanf("%f", &salario_base);
    gratificacao = salario_base * 0.05;
    imposto = (salario_base + gratificacao) * 0.10;
    salario_receber = salario_base + gratificacao - imposto;
    printf("A matrícula do funcionário é: %d\n", matricula);
    printf("O salário a receber é: %.2f\n", salario_receber);
    return 0;
}