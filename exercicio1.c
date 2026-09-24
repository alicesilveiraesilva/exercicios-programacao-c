#include <stdio.h>

int main(){
    int idade, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;
    float total = 8.0;

    for (int i = 0; i < 8; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        // Verifica se a idade é inválida (negativa)
        if (idade < 0) {
            printf("Idade inválida! Digite um valor positivo.\n");
            i--; // Diminui o contador para repetir a leitura desta pessoa
            continue; // Pula para a próxima iteração
        }

        if (idade <= 15) { // Não precisa verificar se é >= 0, pois já barramos os negativos
            faixa1++;
        } else if (idade <= 30) {
            faixa2++;
        } else if (idade <= 45) {
            faixa3++;
        } else if (idade <= 60) {
            faixa4++;
        } else {
            faixa5++;
        }
    }

    printf("\nQuantidade de pessoas em cada faixa etária:\n");
    printf("Faixa etária 0-15 anos: %d\n", faixa1);
    printf("Faixa etária 16-30 anos: %d\n", faixa2);
    printf("Faixa etária 31-45 anos: %d\n", faixa3);
    printf("Faixa etária 46-60 anos: %d\n", faixa4);
    printf("Faixa etária acima de 60 anos: %d\n", faixa5);

    printf("\nPorcentagem de pessoas na primeira faixa etária: %.2f%%\n", (faixa1 / total) * 100);
    printf("Porcentagem de pessoas na última faixa etária: %.2f%%\n", (faixa5 / total) * 100);

    return 0;
}