/*Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas, o novo preço e a classificação.

tabela 1
preço até 50.00 aumento de 5%
preço acima de 50.00 e até 100.00 aumento de 10%
preço acima de 100.00 aumento de 15%

tabela 2
novo preço até 80.00 classificação: barato
novo preço acima de 80.00 e até 120.00 classificação: normal
novo preço acima de 120.00 classificação: caro
maior que 200.00 classificação: muito caro
*/


#include <stdio.h>
main()
{
    float preco, novo_preco;
    char classificacao[20];

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    if (preco <= 50.00)
    {
        novo_preco = preco * 1.05;
    }
    else if (preco <= 100.00)
    {
        novo_preco = preco * 1.10;
    }
    else
    {
        novo_preco = preco * 1.15;
    }

    if (novo_preco <= 80.00)
    {
        strcpy(classificacao, "barato");
    }
    else if (novo_preco <= 120.00)
    {
        strcpy(classificacao, "normal");
    }
    else if (novo_preco <= 200.00)
    {
        strcpy(classificacao, "caro");
    }
    else
    {
        strcpy(classificacao, "muito caro");
    }

    printf("Novo preço: %.2f\n", novo_preco);
    printf("Classificação: %s\n", classificacao);
}