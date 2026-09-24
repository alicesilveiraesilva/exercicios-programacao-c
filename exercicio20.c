/*Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir. Para idade inferior a 5, deve mostrar a mensagem.
5 a 7 anos: Infantil
8 a 10 anos: Juvenil
11 a 15 anos: Adolescente
16 a 30 anos: Adulto
Acima de 30 anos: Sênior
abaixo de 5 anos: Não permitido
*/

#include <stdio.h>
main()
{
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade < 5)
    {
        printf("Não permitido\n");
    }
    else if (idade >= 5 && idade <= 7)
    {
        printf("Categoria: Infantil\n");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Categoria: Juvenil\n");
    }
    else if (idade >= 11 && idade <= 15)
    {
        printf("Categoria: Adolescente\n");
    }
    else if (idade >= 16 && idade <= 30)
    {
        printf("Categoria: Adulto\n");
    }
    else
    {
        printf("Categoria: Sênior\n");
    }

    return 0;
}

