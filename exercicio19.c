/*Faça um programa que receba a altura e o sexo de uma pessoa e calcule o peso ideal 
usando as seguintes formulas (onde h é altura)
para homens: (72.7 * h) - 58
para mulheres: (62.1 * h) - 44.7
*/


#include <stdio.h>

int main()
{
    float altura, peso_ideal;
    char sexo;

    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);
    printf("Digite o sexo da pessoa (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal para o homem é: %.2f kg\n", peso_ideal);
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal para a mulher é: %.2f kg\n", peso_ideal);
    }
    else
    {
        printf("Sexo inválido. Por favor, digite M para masculino ou F para feminino.\n");
    }

    return 0;
}