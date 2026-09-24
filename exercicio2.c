/*Escreva um algoritmo que determine o consumo médio de combustível de um
automóvel após recebidas a distância total percorrida e a quantidade de
combustível gasto.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float distancia, combustivel, consumo_medio;
    printf("Digite a distancia:");
    scanf("%f", &distancia);
    printf("Digite a quantidade de combustivel gasto: ");
    scanf("%f", &combustivel);
    consumo_medio = distancia / combustivel;
    printf("O consumo médio de combustível é: %.2f km/l\n", consumo_medio);
    return 0;
}