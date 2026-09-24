//if salario < 500.00
//então salario = salario + (salario * 0.3) e print o valor reajustado
// se o salario >= 500.00 print que ele não tem direito a aumento

#include <stdio.h>

int main()
{
    float salario;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    if (salario < 500.00)
    {
        salario = salario + (salario * 0.3);
        printf("Salário reajustado: %.2f\n", salario);
    }
    else
    {
        printf("O funcionário não tem direito a aumento.\n");
    }

    return 0;
}

