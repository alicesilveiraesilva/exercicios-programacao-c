#include <stdio.h>

int main() {
    int numero;
    int soma_pares = 0;
    int soma_primos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);

        // 1. Verificação de número PAR
        // Se o resto da divisão por 2 for zero, ele é par.
        if (numero % 2 == 0) {
            soma_pares += numero;
        }

        // 2. Verificação de número PRIMO
        int eh_primo = 1; // Usamos 1 como "Verdadeiro" (assumimos que é primo no início)

        // Números menores ou iguais a 1 não são primos
        if (numero <= 1) {
            eh_primo = 0; // 0 = "Falso"
        } else {
            // Tentamos dividir o número por todos os valores de 2 até a metade dele
            for (int j = 2; j <= numero / 2; j++) {
                if (numero % j == 0) {
                    eh_primo = 0; // Encontramos um divisor! Então não é primo.
                    break;        // Interrompe o laço, pois já sabemos que não é primo
                }
            }
        }

        // Se a variável eh_primo continuou valendo 1, nós somamos
        if (eh_primo == 1) {
            soma_primos += numero;
        }
    }

    printf("\n================ RESULTADOS =================\n");
    printf("Soma dos números pares: %d\n", soma_pares);
    printf("Soma dos números primos: %d\n", soma_primos);
    printf("=============================================\n");

    return 0;
}