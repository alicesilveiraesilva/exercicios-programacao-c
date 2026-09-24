#include <stdio.h>

int main() {
    int idade;
    float peso;
    
    // Contadores para a quantidade de pessoas em cada faixa etária
    int qtd_faixa1 = 0, qtd_faixa2 = 0, qtd_faixa3 = 0, qtd_faixa4 = 0;
    
    // Acumuladores para a soma dos pesos em cada faixa etária
    float soma_peso1 = 0.0, soma_peso2 = 0.0, soma_peso3 = 0.0, soma_peso4 = 0.0;

    for (int i = 0; i < 15; i++) {
        printf("--- Dados da Pessoa %d ---\n", i + 1);
        
        printf("Digite a idade: ");
        scanf("%d", &idade);
        
        printf("Digite o peso (em kg): ");
        scanf("%f", &peso);
        printf("\n");

        // Verifica em qual faixa etária a pessoa se encaixa
        if (idade >= 1 && idade <= 10) {
            soma_peso1 += peso;
            qtd_faixa1++;
        } else if (idade >= 11 && idade <= 20) {
            soma_peso2 += peso;
            qtd_faixa2++;
        } else if (idade >= 21 && idade <= 30) {
            soma_peso3 += peso;
            qtd_faixa3++;
        } else if (idade >= 31) {
            soma_peso4 += peso;
            qtd_faixa4++;
        } else {
            // Caso o usuário digite uma idade menor que 1 (ex: 0 ou negativa)
            printf("Idade fora do escopo analisado.\n");
        }
    }

    printf("================ MÉDIA DE PESOS POR FAIXA ETÁRIA =================\n");

    // Faixa 1 a 10 anos
    if (qtd_faixa1 > 0) {
        printf("1 a 10 anos: %.2f kg\n", soma_peso1 / qtd_faixa1);
    } else {
        printf("1 a 10 anos: Nenhuma pessoa registrada.\n");
    }

    // Faixa 11 a 20 anos
    if (qtd_faixa2 > 0) {
        printf("11 a 20 anos: %.2f kg\n", soma_peso2 / qtd_faixa2);
    } else {
        printf("11 a 20 anos: Nenhuma pessoa registrada.\n");
    }

    // Faixa 21 a 30 anos
    if (qtd_faixa3 > 0) {
        printf("21 a 30 anos: %.2f kg\n", soma_peso3 / qtd_faixa3);
    } else {
        printf("21 a 30 anos: Nenhuma pessoa registrada.\n");
    }

    // Faixa 31 anos para cima
    if (qtd_faixa4 > 0) {
        printf("Acima de 31 anos: %.2f kg\n", soma_peso4 / qtd_faixa4);
    } else {
        printf("Acima de 31 anos: Nenhuma pessoa registrada.\n");
    }
    
    printf("==================================================================\n");

    return 0;
}