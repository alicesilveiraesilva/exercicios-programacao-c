#include <stdio.h>

int main() {
    int idade, total_pessoas = 0;
    char sexo;
    float salario;

    float soma_salarios = 0;
    int maior_idade = 0;
    int menor_idade = 0;

    float menor_salario = 0;
    int idade_menor_salario = 0;
    char sexo_menor_salario = ' ';
    int qtd_mulheres_200 = 0;

    printf("Digite a idade (ou um valor negativo para encerrar): ");
    scanf("%d", &idade);

    while (idade >= 0) {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Digite o salário: ");
        scanf("%f", &salario);

        // a) Acumulando dados para a média dos salários
        soma_salarios += salario;
        total_pessoas++;

        // b) Determinando maior e menor idade
        if (total_pessoas == 1) {
            maior_idade = idade;
            menor_idade = idade;
        } else {
            if (idade > maior_idade) {
                maior_idade = idade;
            }
            if (idade < menor_idade) {
                menor_idade = idade;
            }
        }

        // c) Contando mulheres com salário até R$ 200,00
        if ((sexo == 'F' || sexo == 'f') && salario <= 200.00) {
            qtd_mulheres_200++;
        }

        // d) Identificando a pessoa com o menor salário
        if (total_pessoas == 1 || salario < menor_salario) {
            menor_salario = salario;
            idade_menor_salario = idade;
            sexo_menor_salario = sexo;
        }

        printf("\nDigite a idade (ou um valor negativo para encerrar): ");
        scanf("%d", &idade);
    }

    if (total_pessoas > 0) {
        float media_salarios = soma_salarios / total_pessoas;
        
        printf("\n--- Resultados da Pesquisa ---\n");
        printf("a) Média dos salários do grupo: R$ %.2f\n", media_salarios);
        printf("b) Maior idade do grupo: %d anos\n", maior_idade);
        printf("   Menor idade do grupo: %d anos\n", menor_idade);
        printf("c) Quantidade de mulheres com salário até R$ 200,00: %d\n", qtd_mulheres_200);
        printf("d) Pessoa com o menor salário (R$ %.2f):\n", menor_salario);
        printf("   - Idade: %d anos\n", idade_menor_salario);
        printf("   - Sexo: %c\n", sexo_menor_salario);
    } else {
        printf("Nenhum dado válido foi inserido.\n");
    }

    return 0;
}