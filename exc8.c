#include <stdio.h>

int main() {
    float valor_carro;

    // 1. Entrada de Dados
    printf("Digite o valor do carro: R$ ");
    scanf("%f", &valor_carro);

    // 2. Cálculo do valor à vista (20% de desconto)
    float preco_vista = valor_carro - (valor_carro * 0.20);
    
    // Cabeçalho da tabela
    printf("\n======================= TABELA DE PAGAMENTO =======================\n");
    printf("Preço Final \t\t Qtd Parcelas \t\t Valor da Parcela\n");
    printf("-------------------------------------------------------------------\n");
    
    // Exibindo a opção à vista (1 parcela)
    printf("R$ %.2f \t\t 1 (A vista) \t\t R$ %.2f\n", preco_vista, preco_vista);

    // 3. Laço de repetição para as opções a prazo
    float percentual_acrescimo = 3.0; // Inicia em 3% para 6 parcelas
    
    for (int parcelas = 6; parcelas <= 60; parcelas += 6) {
        
        // Calcula o preço final com o acréscimo atual
        float acrescimo = valor_carro * (percentual_acrescimo / 100.0);
        float preco_final = valor_carro + acrescimo;
        
        // Calcula o valor de cada parcela
        float valor_parcela = preco_final / parcelas;
        
        // Exibe os dados formatados (o \t serve para tabular e alinhar as colunas)
        printf("R$ %.2f \t\t %d \t\t\t R$ %.2f\n", preco_final, parcelas, valor_parcela);
        
        // Incrementa o percentual para a próxima rodada (sobe de 3 em 3%)
        percentual_acrescimo += 3.0; 
    }

    printf("===================================================================\n");

    return 0;
}