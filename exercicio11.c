/*Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e mostre o valor do aumento e o novo salário */

#include <stdio.h>
main()
{
    float salario_atual, aumento, novo_salario;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario_atual);

    if (salario_atual <= 300.00)
    {
        aumento = salario_atual * 0.15;
    }
    else if (salario_atual <= 600.00)
    {
        aumento = salario_atual * 0.10;
    }
    else if (salario_atual <= 900.00)
    {
        aumento = salario_atual * 0.05;
    }
    else
    {
        aumento = salario_atual * 0.00;
    }

    novo_salario = salario_atual + aumento;

    printf("Valor do aumento: %.2f\n", aumento);
    printf("Novo salário: %.2f\n", novo_salario);
}