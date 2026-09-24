/*9. A aceleração de um corpo em movimento é a mudança da velocidade do
corpo em relação a um intervalo de tempo: a = (vf - vi)/Δt. Escrever um
algoritmo que calcule a aceleração de um corpo em movimento
conhecendo-se as velocidades inicial e final e o intervalo de tempo medido.
Obs.: considere as velocidades informadas em km/h e o intervalo de tempo
em segundos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vi, vf, delta_t, aceleracao;
    printf("Digite a velocidade inicial (km/h): ");
    scanf("%f", &vi);
    printf("Digite a velocidade final (km/h): ");
    scanf("%f", &vf);
    printf("Digite o intervalo de tempo (s): ");
    scanf("%f", &delta_t);
    aceleracao = (vf - vi) / delta_t;
    printf("A aceleração do corpo em movimento é: %.2f km/h²\n", aceleracao);
    return 0;
}   