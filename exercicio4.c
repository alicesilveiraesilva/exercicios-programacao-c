/*Faça um algoritmo que receba o preço de custo de um produto e a margem
de lucro sobre o mesmo em porcentagem (%), calcule e mostre o preço de
venda já com o lucro incluído.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float preco_custo, margem_lucro, preco_venda;
    printf("Digite o preco de custo do produto: ");
    scanf("%f", &preco_custo);
    printf("Digite a margem de lucro em porcentagem: ");
    scanf("%f", &margem_lucro);
    preco_venda = preco_custo + (preco_custo * (margem_lucro / 100));
    printf("O preco de venda do produto com lucro incluido é: %.2f\n", preco_venda);
    return 0;
}