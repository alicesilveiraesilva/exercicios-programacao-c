/*Faça um programa que receba o salario de um funcionario, calcule e mostre o novo salario
Até 300.00 aumento de 50%
Acima de 300.00 e até 500.00 aumento de 40%
Acima de 500.00 e até 700.00 aumento de 30%
Acima de 700.00 e até 800.00 aumento de 20%
Acima de 800.00 e até 1000.00 aumento de 10%
Acima de 1000.00 aumento de 5%
*/

#include <stdio.h>
int main()
{
    float salario, novo_salario;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);  

    if (salario <= 300.00)
    {
        novo_salario = salario * 1.50;
    }
    else if (salario <= 500.00)
    {
        novo_salario = salario * 1.40;
    }
    else if (salario <= 700.00)
    {
        novo_salario = salario * 1.30;
    }
    else if (salario <= 800.00)
    {
        novo_salario = salario * 1.20;
    }
    else if (salario <= 1000.00)
    {
        novo_salario = salario * 1.10;
    }
    else
    {
        novo_salario = salario * 1.05;
    }

    printf("Novo salário: %.2f\n", novo_salario);
}