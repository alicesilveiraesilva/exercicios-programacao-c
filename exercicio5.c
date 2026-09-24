//O programa rece dois numeros e retona 
//de acordo com a escolha do usuário, a soma, subtração, multiplicação ou divisão dos dois números.

#include <stdio.h>
int main()
{
    int num1, num2, escolha;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Escolha a operação:\n 1 - média  \n 2 - Subtração\n 3 - Multiplicação\n 4 - Divisão\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        printf("A média é: %d\n", (num1 + num2) / 2);
        break;
    case 2:
        printf("A subtração é: %d\n", num1 - num2);
        break;
    case 3:     
        printf("A multiplicação é: %d\n", num1 * num2);
        break;
    case 4:
        if (num2 != 0)
        {
            printf("A divisão é: %d\n", num1 / num2);
        }
        else
        {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
        break;
    default:
        printf("Escolha inválida.\n");
        break;
    }
    return 0;
}   
