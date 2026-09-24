/*10. Crie um algoritmo que receba o valor de x e calcule e escreva o valor de y
como: y = ((x+1)*x)/x-25*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    y = ((x + 1) * x) / (x - 25);
    printf("O valor de y é: %.2f\n", y);
    return 0;
}   
