#include <stdio.h>

int main() {
    int opcao;
    float n1, n2, n3, p1, p2, p3, media;

    do {
        printf("\nMenu de opcoes:\n");
        printf("1. Media aritmetica\n");
        printf("2. Media ponderada\n");
        printf("3. Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a primeira nota: ");
                scanf("%f", &n1);
                printf("Digite a segunda nota: ");
                scanf("%f", &n2);
                media = (n1 + n2) / 2.0;
                printf("A media aritmetica e: %.2f\n", media);
                break;

            case 2:
                printf("Digite a primeira nota e seu peso: ");
                scanf("%f %f", &n1, &p1);
                printf("Digite a segunda nota e seu peso: ");
                scanf("%f %f", &n2, &p2);
                printf("Digite a terceira nota e seu peso: ");
                scanf("%f %f", &n3, &p3);
                
                media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
                printf("A media ponderada e: %.2f\n", media);
                break;

            case 3:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida! Por favor, escolha uma opcao valida do menu.\n");
        }
    } while (opcao != 3);

    return 0;
}