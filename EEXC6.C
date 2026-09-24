#include <stdio.h>

int main() {
    int idade;
    float peso, altura;
    
    // Variáveis para armazenar os resultados
    int soma_idades = 0;               // Para a letra A
    int qtd_b = 0;                     // Para a letra B
    
    // Variáveis para a letra C
    int qtd_pessoas_altas = 0;         // Base: pessoas com mais de 1,90m
    int qtd_altas_idade_10_30 = 0;     // Alvo: dessas altas, quantas têm entre 10 e 30 anos

    for (int i = 0; i < 10; i++) {
        printf("--- Dados da Pessoa %d ---\n", i + 1);
        
        printf("Idade: ");
        scanf("%d", &idade);
        
        printf("Peso (em kg): ");
        scanf("%f", &peso);
        
        printf("Altura (em metros): ");
        scanf("%f", &altura);
        printf("\n");

        // a) Acumula as idades para calcular a média no final
        soma_idades += idade;

        // b) Pessoas com peso superior a 90 kg E altura inferior a 1,50 m
        if (peso > 90.0 && altura < 1.50) {
            qtd_b++;
        }

        // c) Porcentagem de pessoas entre 10 e 30 anos ENTRE as que medem mais de 1,90 m
        if (altura > 1.90) {
            qtd_pessoas_altas++; // Conta quantas pessoas medem mais de 1,90m
            
            // Se ela já mede mais de 1,90m, vamos ver se a idade está entre 10 e 30
            if (idade >= 10 && idade <= 30) {
                qtd_altas_idade_10_30++;
            }
        }
    }

    printf("================ RESULTADOS =================\n");
    
    // Saída A
    float media_idades = soma_idades / 10.0;
    printf("a) Média das idades das dez pessoas: %.2f anos\n", media_idades);

    // Saída B
    printf("b) Pessoas com mais de 90kg e menos de 1.50m: %d\n", qtd_b);

    // Saída C (Precisamos proteger contra divisão por zero)
    if (qtd_pessoas_altas > 0) {
        // Calcula a porcentagem usando apenas o grupo das pessoas com mais de 1.90m
        float porcentagem_c = ((float)qtd_altas_idade_10_30 / qtd_pessoas_altas) * 100.0;
        printf("c) Porcentagem (de 10 a 30 anos) entre os maiores que 1.90m: %.2f%%\n", porcentagem_c);
    } else {
        printf("c) Não foram registradas pessoas com mais de 1.90m para calcular a porcentagem.\n");
    }
    
    printf("=============================================\n");

    return 0;
}