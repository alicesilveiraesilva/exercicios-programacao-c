#include <stdio.h>

int main() {
    int canal, pessoas;
    
    // Acumuladores de pessoas por canal e total geral
    int total_geral = 0;
    int pessoas_4 = 0;
    int pessoas_5 = 0;
    int pessoas_7 = 0;
    int pessoas_12 = 0;

    printf("--- Pesquisa de Audiência de TV ---\n");
    printf("Digite 0 no número do canal para encerrar a entrada de dados.\n\n");

    while (1) {
        printf("Digite o número do canal (4, 5, 7, 12): ");
        scanf("%d", &canal);

        // Condição de parada: canal igual a zero
        if (canal == 0) {
            break;
        }

        // Validação caso o usuário digite um canal inexistente
        if (canal != 4 && canal != 5 && canal != 7 && canal != 12) {
            printf("Canal inválido! Os canais permitidos são 4, 5, 7 e 12.\n\n");
            continue; // Volta para o início do laço sem pedir o número de pessoas
        }

        printf("Digite o número de pessoas assistindo: ");
        scanf("%d", &pessoas);

        // Proteção contra valores negativos de pessoas
        if (pessoas < 0) {
            printf("O número de pessoas não pode ser negativo. Tente novamente.\n\n");
            continue;
        }

        printf("\n");

        // Soma as pessoas no canal correspondente e no total geral
        if (canal == 4) {
            pessoas_4 += pessoas;
        } else if (canal == 5) {
            pessoas_5 += pessoas;
        } else if (canal == 7) {
            pessoas_7 += pessoas;
        } else if (canal == 12) {
            pessoas_12 += pessoas;
        }

        total_geral += pessoas;
    }

    printf("\n================ RESULTADOS DA AUDIÊNCIA ================\n");

    // Verifica se houve dados computados para evitar divisão por zero
    if (total_geral > 0) {
        float perc_4 = ((float)pessoas_4 / total_geral) * 100.0;
        float perc_5 = ((float)pessoas_5 / total_geral) * 100.0;
        float perc_7 = ((float)pessoas_7 / total_geral) * 100.0;
        float perc_12 = ((float)pessoas_12 / total_geral) * 100.0;

        printf("Total geral de pessoas assistindo TV: %d\n\n", total_geral);
        printf("Canal  4: %.2f%% da audiência (%d pessoas)\n", perc_4, pessoas_4);
        printf("Canal  5: %.2f%% da audiência (%d pessoas)\n", perc_5, pessoas_5);
        printf("Canal  7: %.2f%% da audiência (%d pessoas)\n", perc_7, pessoas_7);
        printf("Canal 12: %.2f%% da audiência (%d pessoas)\n", perc_12, pessoas_12);
    } else {
        printf("Nenhum dado de audiência foi registrado.\n");
    }

    printf("=========================================================\n");

    return 0;
}