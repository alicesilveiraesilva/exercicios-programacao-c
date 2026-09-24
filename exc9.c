#include <stdio.h>

int main() {
    int numero;
    int qtd_primos = 0; // Contador de números primos

    for (int i = 0; i < 10; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numero);

        // Verifica se o número é maior que 1 (regras dos primos)
        if (numero > 1) {
            int eh_primo = 1; // 1 significa Verdadeiro (é primo)

            // Laço para testar os divisores de 2 até a metade do número
            for (int j = 2; j <= numero / 2; j++) {
                if (numero % j == 0) {
                    eh_primo = 0; // 0 significa Falso (não é primo)
                    break;        // Para a verificação, pois já achou um divisor
                }
            }

            // Se terminou o laço e a bandeira continua levantada (1), incrementa o contador
            if (eh_primo == 1) {
                qtd_primos++;
            }
        }
    }

    printf("\n================ RESULTADO =================\n");
    printf("Quantidade de números primos digitados: %d\n", qtd_primos);
    printf("============================================\n");

    return 0;
}