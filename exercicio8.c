/*Faça um programa pra calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento depende do salário :
Até R$ 300,00 - 35%
Acima de R$ 300,00 - 15% */

#include <stdio.h>

int main()
{
    float salario;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    if (salario <= 300.00)
    {
        salario = salario + (salario * 0.35);
        printf("Salário reajustado: %.2f\n", salario);
    }
    else
    {
        salario = salario + (salario * 0.15);
        printf("Salário reajustado: %.2f\n", salario);
    }

    return 0;
}
