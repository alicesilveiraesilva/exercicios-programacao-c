// o programa recebe  dois numeros e executa 
// 1 - o primeiro numero elevado ao segundo numero
//2 a raiz quadrada de cada numero
//3 a raiz cubica de cada numero

#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, opcao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);     
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Escolha a operação:\n 1 - Potência\n 2 - Raiz Quadrada\n 3 - Raiz Cúbica\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("%d elevado a %d é: %.2f\n", num1, num2, pow(num1, num2));
            break;
        case 2:
            printf("A raiz quadrada de %d é: %.2f\n", num1, sqrt(num1));
            printf("A raiz quadrada de %d é: %.2f\n", num2, sqrt(num2));
            break;
        case 3:
            printf("A raiz cúbica de %d é: %.2f\n", num1, cbrt(num1));
            printf("A raiz cúbica de %d é: %.2f\n", num2, cbrt(num2));
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}