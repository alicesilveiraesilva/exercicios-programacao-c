#include <stdio.h>

int main() {
    int voto;
    int cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0;
    int nulos = 0, brancos = 0, total_votos = 0;

    printf("Digite o codigo do voto (1 a 4 para candidatos, 5 para nulo, 6 para em branco, 0 para sair):\n");
    scanf("%d", &voto);

    while (voto != 0) {
        switch (voto) {
            case 1:
                cand1++;
                total_votos++;
                break;
            case 2:
                cand2++;
                total_votos++;
                break;
            case 3:
                cand3++;
                total_votos++;
                break;
            case 4:
                cand4++;
                total_votos++;
                break;
            case 5:
                nulos++;
                total_votos++;
                break;
            case 6:
                brancos++;
                total_votos++;
                break;
            default:
                printf("Codigo invalido!\n");
                break;
        }

        printf("Digite o proximo codigo (0 para sair): ");
        scanf("%d", &voto);
    }

    if (total_votos > 0) {
        float perc_nulos = ((float)nulos / total_votos) * 100.0;
        float perc_brancos = ((float)brancos / total_votos) * 100.0;

        printf("\n--- Resultado da Eleicao ---\n");
        printf("a) Total de votos para cada candidato:\n");
        printf("   - Candidato 1: %d\n", cand1);
        printf("   - Candidato 2: %d\n", cand2);
        printf("   - Candidato 3: %d\n", cand3);
        printf("   - Candidato 4: %d\n", cand4);
        printf("b) Total de votos nulos: %d\n", nulos);
        printf("c) Total de votos em branco: %d\n", brancos);
        printf("d) Porcentagem de votos nulos sobre o total: %.2f%%\n", perc_nulos);
        printf("e) Porcentagem de votos em branco sobre o total: %.2f%%\n", perc_brancos);
    } else {
        printf("Nenhum voto foi computado.\n");
    }

    return 0;
}