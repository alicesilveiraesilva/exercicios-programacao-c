/*Escreva um algoritmo que receba a matrícula de um aluno e as 4 notas bimestrais
do ano, calcule e mostre a matrícula do aluno e as suas médias aritméticas anual e
semestrais.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matricula;
    float nota1, nota2, nota3, nota4, media_anual, media_semestre1, media_semestre2;
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);
    media_semestre1 = (nota1 + nota2) / 2;
    media_semestre2 = (nota3 + nota4) / 2;
    media_anual = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("Matricula: %d\n", matricula);
    printf("Media do primeiro semestre: %.2f\n", media_semestre1);
    printf("Media do segundo semestre: %.2f\n", media_semestre2);
    printf("Media anual: %.2f\n", media_anual);
    return 0;
}  