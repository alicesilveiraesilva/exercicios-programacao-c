#include <stdio.h>

int main() {
    int idade, opiniao;
    
    // Contadores e acumuladores
    int qtd_otimo = 0, qtd_bom = 0, qtd_regular = 0;
    int soma_idade_otimo = 0;

    // Laço para os 15 espectadores
    for (int i = 0; i < 15; i++) {
        printf("--- Espectador %d ---\n", i + 1);
        
        printf("Digite a idade: ");
        scanf("%d", &idade);
        
        // Laço de validação: repete até o usuário digitar 1, 2 ou 3
        do {
            printf("Opinião (3 - Ótimo, 2 - Bom, 1 - Regular): ");
            scanf("%d", &opiniao);
            
            if (opiniao < 1 || opiniao > 3) {
                printf("Opinião inválida! Digite apenas 1, 2 ou 3.\n");
            }
        } while (opiniao < 1 || opiniao > 3);
        printf("\n");

        // Processa as respostas
        if (opiniao == 3) {
            soma_idade_otimo += idade; // Acumula a idade
            qtd_otimo++;               // Conta quantas pessoas acharam ótimo
        } else if (opiniao == 2) {
            qtd_bom++;                 // Conta quantas pessoas acharam bom
        } else if (opiniao == 1) {
            qtd_regular++;             // Conta quantas pessoas acharam regular
        }
    }

    printf("================ RESULTADOS =================\n");
    
    // a) Média das idades das pessoas que responderam ótimo
    if (qtd_otimo > 0) {
        float media_otimo = (float)soma_idade_otimo / qtd_otimo;
        printf("a) Média de idade de quem achou ÓTIMO: %.2f anos\n", media_otimo);
    } else {
        printf("a) Média de idade de quem achou ÓTIMO: Ninguém escolheu essa opção.\n");
    }

    // b) Quantidade de pessoas que responderam regular
    printf("b) Quantidade de pessoas que acharam REGULAR: %d\n", qtd_regular);

    // c) Porcentagem de pessoas que responderam bom (baseado nos 15 totais)
    float porcentagem_bom = (qtd_bom / 15.0) * 100.0;
    printf("c) Porcentagem de pessoas que acharam BOM: %.2f%%\n", porcentagem_bom);
    
    printf("=============================================\n");

    return 0;
}