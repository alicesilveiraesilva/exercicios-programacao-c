/*Um banco concederá um crédito especial aos seus clientes de acordo com o seu saldo médio no último ano 
Faça um programa que receba o saldo médio e calcule o valor do crédito de acordo com a tabela abaixo:
Saldo médio          Percentual de crédito
Até R$ 200,00        10%
De R$ 200,01 até R$ 300,00    20%
De R$ 300,01 até R$ 400,00    25%
Acima de R$ 400,00    30% */

#include <stdio.h>

int main()
{
    float saldo_medio, credito;

    printf("Digite o saldo médio: ");
    scanf("%f", &saldo_medio);

    if (saldo_medio <= 200.00)
    {
        credito = saldo_medio * 0.10;
    }
    else if (saldo_medio <= 300.00)
    {
        credito = saldo_medio * 0.20;
    }
    else if (saldo_medio <= 400.00)
    {
        credito = saldo_medio * 0.25;
    }
    else
    {
        credito = saldo_medio * 0.30;
    }

    printf("Valor do crédito: %.2f\n", credito);

    return 0;
}
