#include <stdio.h>
#include <ctype.h> // Para a função toupper()

int main() {
    char sexo, resposta;
    
    // Variáveis contadoras
    int total_sim = 0;
    int total_nao = 0;
    int mulheres_sim = 0;
    
    // Variáveis para calcular a porcentagem dos homens
    int total_homens = 0;
    int homens_nao = 0;

    for (int i = 0; i < 10; i++) {
        printf("--- Entrevistado %d ---\n", i + 1);

        // Validação da entrada do Sexo usando do-while
        do {
            printf("Sexo (M para Masculino / F para Feminino): ");
            scanf(" %c", &sexo);
            sexo = toupper(sexo); // Converte para maiúscula
            
            if (sexo != 'M' && sexo != 'F') {
                printf("Opção inválida! Digite apenas M ou F.\n");
            }
        } while (sexo != 'M' && sexo != 'F');

        // Validação da entrada da Resposta usando do-while
        do {
            printf("Gostou do novo produto? (S para Sim / N para Não): ");
            scanf(" %c", &resposta);
            resposta = toupper(resposta); // Converte para maiúscula
            
            if (resposta != 'S' && resposta != 'N') {
                printf("Opção inválida! Digite apenas S ou N.\n");
            }
        } while (resposta != 'S' && resposta != 'N');
        
        printf("\n"); // Pula uma linha para organizar

        // a) Número de pessoas que responderam SIM
        if (resposta == 'S') {
            total_sim++;
        }
        
        // b) Número de pessoas que responderam NÃO
        if (resposta == 'N') {
            total_nao++;
        }

        // c) Número de mulheres que responderam SIM
        if (sexo == 'F' && resposta == 'S') {
            mulheres_sim++;
        }

        // d) Coletando dados para a porcentagem de homens
        if (sexo == 'M') {
            total_homens++; // Aumenta a base (total de homens entrevistados)
            if (resposta == 'N') {
                homens_nao++; // Conta apenas os que disseram não
            }
        }
    }

    // Exibição dos Resultados
    printf("================ RESULTADOS =================\n");
    printf("a) Pessoas que responderam SIM: %d\n", total_sim);
    printf("b) Pessoas que responderam NÃO: %d\n", total_nao);
    printf("c) Mulheres que responderam SIM: %d\n", mulheres_sim);

    // Proteção contra divisão por zero para a letra D
    if (total_homens > 0) {
        float porcentagem = ((float)homens_nao / total_homens) * 100.0;
        printf("d) Porcentagem de homens que responderam NÃO (entre os homens): %.2f%%\n", porcentagem);
    } else {
        printf("d) Não houve homens entrevistados na pesquisa.\n");
    }
    printf("=============================================\n");

    return 0;
}