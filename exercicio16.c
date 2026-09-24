/*Uma emoresa decide aplicar descontos nos seus preços usando a tabela a seguir. faça um programa que receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e seu novo preço.
até 30.00 sem desconto
acima de 30.00 e até 100.00 desconto de 10%
acima de 100.00 desconto de 15%
*/

#include <stdio.h>
int main()
{
    float preco_atual, desconto, novo_preco;

    printf("Digite o preço atual do produto: ");
    scanf("%f", &preco_atual);

    if (preco_atual <= 30.00)
    {
        desconto = 0.00;
    }
    else if (preco_atual <= 100.00)
    {
        desconto = preco_atual * 0.10;
    }
    else
    {
        desconto = preco_atual * 0.15;
    }
    novo_preco = preco_atual - desconto;
    printf("Valor do desconto: %.2f\n", desconto);
    printf("Novo preço: %.2f\n", novo_preco);
    return 0;
}