#include <stdio.h>
#include <ctype.h> // Para a função toupper()

int main() {
    int idade;
    float peso, altura;
    char cor_olhos, cor_cabelos;
    
    // Variáveis para armazenar os resultados
    int qtd_a = 0;              // Pessoas > 50 anos E < 60 kg
    int soma_idade_b = 0;       // Soma das idades (altura < 1.50)
    int qtd_b = 0;              // Contagem de pessoas (altura < 1.50)
    int qtd_c = 0;              // Pessoas com olhos azuis
    int qtd_d = 0;              // Pessoas ruivas E sem olhos azuis

    for (int i = 0; i < 6; i++) {
        printf("--- Dados da Pessoa %d ---\n", i + 1);
        
        printf("Idade: ");
        scanf("%d", &idade);
        
        printf("Peso (em kg): ");
        scanf("%f", &peso);
        
        printf("Altura (em metros): ");
        scanf("%f", &altura);
        
        printf("Cor dos olhos (A-Azul, P-Preto, V-Verde, C-Castanho): ");
        scanf(" %c", &cor_olhos);
        cor_olhos = toupper(cor_olhos);
        
        printf("Cor dos cabelos (P-Preto, C-Castanho, L-Louro, R-Ruivo): ");
        scanf(" %c", &cor_cabelos);
        cor_cabelos = toupper(cor_cabelos);
        printf("\n");

        // a) idade > 50 E peso < 60 kg
        // O operador && significa "AND" (E). Ambas as condições precisam ser verdadeiras.
        if (idade > 50 && peso < 60.0) {
            qtd_a++;
        }

        // b) média das idades de quem tem altura < 1,50 m
        if (altura < 1.50) {
            soma_idade_b += idade;
            qtd_b++;
        }

        // c) porcentagem de pessoas com olhos azuis
        if (cor_olhos == 'A') {
            qtd_c++;
        }

        // d) quantidade de pessoas ruivas e que NÃO possuem olhos azuis
        // O operador != significa "DIFERENTE DE".
        if (cor_cabelos == 'R' && cor_olhos != 'A') {
            qtd_d++;
        }
    }

    // Exibição dos resultados
    printf("================ RESULTADOS =================\n");
    
    // Saída A
    printf("a) Pessoas com mais de 50 anos e menos de 60 kg: %d\n", qtd_a);

    // Saída B (Com proteção contra divisão por zero)
    if (qtd_b > 0) {
        float media_idades = (float)soma_idade_b / qtd_b;
        printf("b) Média de idade das pessoas com menos de 1.50m: %.2f anos\n", media_idades);
    } else {
        printf("b) Nenhuma pessoa com altura inferior a 1.50m foi registrada.\n");
    }

    // Saída C (Total de pessoas analisadas é 6)
    float porcentagem_azuis = (qtd_c / 6.0) * 100.0;
    printf("c) Porcentagem de pessoas com olhos azuis: %.2f%%\n", porcentagem_azuis);
    
    // Saída D
    printf("d) Pessoas ruivas que não têm olhos azuis: %d\n", qtd_d);
    
    printf("=============================================\n");

    return 0;
}