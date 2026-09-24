#include <stdio.h>

int main() {
    int numero;

    // Recebe o número do usuário
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Estrutura de repetição que vai de 0 até 10
    for (int i = 0; i <= 10; i++) {
        // Calcula e exibe o resultado formatado
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}