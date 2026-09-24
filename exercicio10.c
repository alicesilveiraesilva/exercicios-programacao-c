/*O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica.
As porcentagens se encontram na tabela abaixo. Leia o custo de fábrica e escreva o preço ao consumidor.
Custo de fábrica    % do distribuidor    % dos impostos
Até R$ 12.000,00    5%                  isento
De R$ 12.000,01 até R$ 25.000,00    10%                 15%
Acima de R$ 25.000,00    15%                 20% */

#include <stdio.h>

int main()
{
    float custo_fabrica, preco_consumidor, percentual_distribuidor, percentual_impostos;

    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custo_fabrica);

    if (custo_fabrica <= 12000.00)
    {
        percentual_distribuidor = 0.05;
        percentual_impostos = 0.00;
        printf("isento de impostos.\n");
    }
    else if (custo_fabrica <= 25000.00)
    {
        percentual_distribuidor = 0.10;
        percentual_impostos = 0.15;
    }
    else
    {
        percentual_distribuidor = 0.15;
        percentual_impostos = 0.20;
    }

    preco_consumidor = custo_fabrica + (custo_fabrica * percentual_distribuidor) + (custo_fabrica * percentual_impostos);

    printf("Preço ao consumidor: %.2f\n", preco_consumidor);

    return 0;
}
