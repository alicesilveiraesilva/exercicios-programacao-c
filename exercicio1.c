#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia quatro notas de um aluno, 
//calcule a média e informe se o aluno foi aprovado ou reprovado. A média para aprovação é 7.

int main( int argc, char *argv[] )
{
    float nota1, nota2, nota3, nota4, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A media é: %.2f\n", media);
    if (media >= 7)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Reprovado\n");
    }
    system("pause");
    return 0;
}