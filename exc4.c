#include <stdio.h>

int main() {
    int idade;
    float altura, peso;
    
    // Variáveis para armazenar os resultados
    int qtd_idade_sup_50 = 0;
    int qtd_idade_10_20 = 0;
    int qtd_peso_inf_40 = 0;
    float soma_altura_10_20 = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("--- Dados da Pessoa %d ---\n", i + 1);
        
        printf("Digite a idade: ");
        scanf("%d", &idade);
        
        printf("Digite a altura (em metros, ex: 1.75): ");
        scanf("%f", &altura);
        
        printf("Digite o peso (em kg): ");
        scanf("%f", &peso);
        printf("\n"); // Pula uma linha para organizar

        // a) Verifica se a idade é superior a 50
        if (idade > 50) {
            qtd_idade_sup_50++;
        }

        // b) Verifica se a idade está entre 10 e 20 anos (inclusive)
        if (idade >= 10 && idade <= 20) {
            soma_altura_10_20 += altura;
            qtd_idade_10_20++; // Precisamos contar quantas pessoas caem aqui para fazer a média depois
        }

        // c) Verifica se o peso é inferior a 40 kg
        if (peso < 40.0) {
            qtd_peso_inf_40++;
        }
    }

    printf("================ RESULTADOS =================\n");
    
    // Saída A
    printf("a) Pessoas com mais de 50 anos: %d\n", qtd_idade_sup_50);

    // Saída B (Com proteção contra divisão por zero)
    if (qtd_idade_10_20 > 0) {
        float media_altura = soma_altura_10_20 / qtd_idade_10_20;
        printf("b) Média de altura (pessoas de 10 a 20 anos): %.2fm\n", media_altura);
    } else {
        printf("b) Média de altura (pessoas de 10 a 20 anos): Nenhuma pessoa nessa faixa de idade.\n");
    }

    // Saída C
    // Divide por 5.0 para garantir que o resultado seja quebrado (float), e não inteiro
    float porcentagem_peso = (qtd_peso_inf_40 / 5.0) * 100.0; 
    printf("c) Porcentagem de pessoas com peso menor que 40kg: %.2f%%\n", porcentagem_peso);
    
    printf("=============================================\n");

    return 0;
}