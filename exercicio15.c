/*Uma agencia bancaria recebe dois tipos de investimentos.
faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corigido após um mês
de investimento, de acordo com seu tipo.
1 - Poupança: 3% de juros
2 - Renda Fixa: 4% de juros
*/

#include <stdio.h>
int main()
{
    int tipo_investimento;
    float valor_investimento, valor_corrigido;

    printf("Digite o tipo de investimento (1 - Poupança, 2 - Renda Fixa): ");
    scanf("%d", &tipo_investimento);

    printf("Digite o valor do investimento: ");
    scanf("%f", &valor_investimento);

    if (tipo_investimento == 1)
    {
        valor_corrigido = valor_investimento * 1.03; // 3% de juros
    }
    else if (tipo_investimento == 2)
    {
        valor_corrigido = valor_investimento * 1.04; // 4% de juros
    }
    else
    {
        printf("Tipo de investimento inválido.\n");
        return 1; // Sai do programa com erro
    }
    printf("Valor corrigido após um mês: %.2f\n", valor_corrigido);
    return 0;
}
