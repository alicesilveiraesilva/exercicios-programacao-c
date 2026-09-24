/*Faça um programa que receba o salário bruto de um funcionario e calcule e mostre o valor a receber
Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.

salario ate 350.00 gratificação 100.00
salario acima de 350.00 e até 600.00 gratificação 75.00
salario acima de 600.00 e até 900.00 gratificação 50.00
salario acima de 900.00 gratificação 35.00
*/

#include <stdio.h>
main()
{
    float salario_bruto, gratificacao, imposto, salario_a_receber;
    printf("Digite o salário bruto do funcionário: ");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 350.00)
    {
        gratificacao = 100.00;
    }
    else if (salario_bruto <= 600.00)
    {
        gratificacao = 75.00;
    }
    else if (salario_bruto <= 900.00)
    {
        gratificacao = 50.00;
    }
    else
    {
        gratificacao = 35.00;
    }
    imposto = salario_bruto * 0.07;
    salario_a_receber = salario_bruto + gratificacao - imposto;
    printf("Salário a receber: %.2f\n", salario_a_receber);
}