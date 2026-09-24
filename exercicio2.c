//Faça um programa que receba quatro notas de um aluno, 
//calcule e mostre a média
//se media >=0 e media < 3, reprovado
//se media >=3 e media < 7, exame
//se media >=7, aprovado

#include <stdio.h>
#include <stdlib.h>

main()
{
    float n1, n2, n3, n4, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("A média é: %f\n", media);
    if (media >= 0 && media < 3)
    {
        printf("Reprovado\n");
    }
    else if (media >= 3 && media < 7)
    {
        printf("Exame\n");
    }
    else if (media >= 7)
    {
        printf("Aprovado\n");
    }
    return 0;
}
