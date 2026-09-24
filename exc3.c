#include <stdio.h>
#include <ctype.h> // Biblioteca necessária para usar a função toupper()

int main() {
    char codigo;
    float valor;
    float total_vista = 0.0, total_prazo = 0.0;

    for (int i = 0; i < 15; i++) {
        // Pede o código da transação
        printf("Digite o código da transação %d (V - à vista / P - a prazo): ", i + 1);
        // O espaço antes do %c é fundamental para ignorar a quebra de linha do Enter anterior
        scanf(" %c", &codigo); 
        
        // Converte o caractere para maiúsculo para aceitar 'v' e 'p' minúsculos também
        codigo = toupper(codigo);

        // Verifica se o código é válido antes de pedir o valor
        if (codigo != 'V' && codigo != 'P') {
            printf("Código inválido! Tente novamente digitando V ou P.\n\n");
            i--; // Volta o contador para repetir esta transação
            continue; // Pula para a próxima repetição do laço
        }

        // Pede o valor da transação
        printf("Digite o valor da transação %d: R$ ", i + 1);
        scanf("%f", &valor);
        printf("\n"); // Apenas para pular uma linha e organizar o terminal

        // Soma nos acumuladores correspondentes
        if (codigo == 'V') {
            total_vista += valor;
        } else if (codigo == 'P') {
            total_prazo += valor;
        }
    }

    // Calcula o total geral e a prestação
    float total_geral = total_vista + total_prazo;
    float primeira_prestacao = total_prazo / 3.0;

    // Exibe os resultados solicitados
    printf("================ RESULTADOS =================\n");
    printf("a) Valor total das compras à vista: R$ %.2f\n", total_vista);
    printf("b) Valor total das compras a prazo: R$ %.2f\n", total_prazo);
    printf("c) Valor total das compras efetuadas: R$ %.2f\n", total_geral);
    printf("d) Valor da 1ª prestação das compras a prazo: R$ %.2f\n", primeira_prestacao);
    printf("=============================================\n");

    return 0;
}