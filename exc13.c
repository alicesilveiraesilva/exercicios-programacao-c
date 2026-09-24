#include <stdio.h>

int main() {
    int idade;
    int soma_idades = 0;
    int contador = 0;

    printf("--- Calculadora de Média de Idades ---\n");
    printf("(Digite 0 a qualquer momento para encerrar o programa)\n\n");

    // Loop infinito que só será quebrado quando a idade for 0
    while (1) {
        printf("Digite uma idade: ");
        scanf("%d", &idade);

        // Verifica a condição de parada antes de somar
        if (idade == 0) {
            break; // O comando 'break' força a saída imediata do laço 'while'
        }

        // Validação extra: impede que idades negativas baguncem a média
        if (idade < 0) {
            printf("Idade inválida! Por favor, digite um valor positivo.\n");
            continue; // Pula o resto do código e volta para o início do laço
        }

        // Acumula a idade e incrementa o contador
        soma_idades += idade;
        contador++;
    }

    printf("\n================ RESULTADOS =================\n");
    
    // Proteção contra divisão por zero (caso o usuário digite 0 logo na primeira vez)
    if (contador > 0) {
        float media = (float)soma_idades / contador;
        printf("Total de pessoas contabilizadas: %d\n", contador);
        printf("Média das idades digitadas: %.2f anos\n", media);
    } else {
        printf("Nenhuma idade válida foi digitada.\n");
    }
    
    printf("=============================================\n");

    return 0;
}