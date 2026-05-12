#include <stdio.h>
#include <string.h>

int main() {

    // =========================
    // CARTA 1
    // =========================

    char pais1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 2.13;
    int pontosTuristicos1 = 30;
    float densidade1 = populacao1 / area1;

    // =========================
    // CARTA 2
    // =========================

    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 0.63;
    int pontosTuristicos2 = 20;
    float densidade2 = populacao2 / area2;

    // =========================
    // VARIÁVEIS
    // =========================

    int atributo1, atributo2;

    float soma1 = 0;
    float soma2 = 0;

    // =========================
    // MENU
    // =========================

    printf("=====================================\n");
    printf("      SUPER TRUNFO DE PAÍSES\n");
    printf("=====================================\n");

    printf("\nEscolha o PRIMEIRO atributo:\n\n");

    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    printf("\nDigite a opção: ");
    scanf("%d", &atributo1);

    // =========================
    // MENU DINÂMICO
    // =========================

    printf("\nEscolha o SEGUNDO atributo:\n\n");

    switch (atributo1) {

        case 1:
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Demográfica\n");
            break;

        case 2:
            printf("1 - População\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Demográfica\n");
            break;

        case 3:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("4 - Pontos Turísticos\n");
            printf("5 - Densidade Demográfica\n");
            break;

        case 4:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("5 - Densidade Demográfica\n");
            break;

        case 5:
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turísticos\n");
            break;

        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("\nDigite a segunda opção: ");
    scanf("%d", &atributo2);

    // =========================
    // VERIFICAÇÃO
    // =========================

    if (atributo1 == atributo2) {

        printf("\nErro: atributos iguais!\n");
        return 1;
    }

    // =========================
    // RESULTADO
    // =========================

    printf("\n=====================================\n");
    printf("RESULTADO DA COMPARAÇÃO\n");
    printf("=====================================\n");

    printf("\nPaís 1: %s\n", pais1);
    printf("País 2: %s\n", pais2);

    // =========================
    // PRIMEIRO ATRIBUTO
    // =========================

    switch (atributo1) {

        case 1:

            printf("\nAtributo 1: População\n");

            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2) {

                printf("Vencedor: %s\n", pais1);

            } else if (populacao2 > populacao1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            soma1 += populacao1;
            soma2 += populacao2;

            break;

        case 2:

            printf("\nAtributo 1: Área\n");

            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if (area1 > area2) {

                printf("Vencedor: %s\n", pais1);

            } else if (area2 > area1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            soma1 += area1;
            soma2 += area2;

            break;

        case 3:

            printf("\nAtributo 1: PIB\n");

            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2) {

                printf("Vencedor: %s\n", pais1);

            } else if (pib2 > pib1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            soma1 += pib1;
            soma2 += pib2;

            break;

        case 4:

            printf("\nAtributo 1: Pontos Turísticos\n");

            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {

                printf("Vencedor: %s\n", pais1);

            } else if (pontosTuristicos2 > pontosTuristicos1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            soma1 += pontosTuristicos1;
            soma2 += pontosTuristicos2;

            break;

        case 5:

            printf("\nAtributo 1: Densidade Demográfica\n");

            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n", pais2, densidade2);

            // MENOR DENSIDADE VENCE

            if (densidade1 < densidade2) {

                printf("Vencedor: %s\n", pais1);

            } else if (densidade2 < densidade1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            soma1 += (1 / densidade1);
            soma2 += (1 / densidade2);

            break;

        default:

            printf("Opção inválida!\n");
            return 1;
    }

    // =========================
    // SEGUNDO ATRIBUTO
    // =========================

    switch (atributo2) {

        case 1:

            printf("\nAtributo 2: População\n");

            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2) {

                printf("Vencedor: %s\n", pais1);

            } else if (populacao2 > populacao1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            soma1 += populacao1;
            soma2 += populacao2;

            break;

        case 2:

            printf("\nAtributo 2: Área\n");

            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if (area1 > area2) {

                printf("Vencedor: %s\n", pais1);

            } else if (area2 > area1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            soma1 += area1;
            soma2 += area2;

            break;

        case 3:

            printf("\nAtributo 2: PIB\n");

            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2) {

                printf("Vencedor: %s\n", pais1);

            } else if (pib2 > pib1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            soma1 += pib1;
            soma2 += pib2;

            break;

        case 4:

            printf("\nAtributo 2: Pontos Turísticos\n");

            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {

                printf("Vencedor: %s\n", pais1);

            } else if (pontosTuristicos2 > pontosTuristicos1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            soma1 += pontosTuristicos1;
            soma2 += pontosTuristicos2;

            break;

        case 5:

            printf("\nAtributo 2: Densidade Demográfica\n");

            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n", pais2, densidade2);

            // MENOR DENSIDADE VENCE

            if (densidade1 < densidade2) {

                printf("Vencedor: %s\n", pais1);

            } else if (densidade2 < densidade1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            soma1 += (1 / densidade1);
            soma2 += (1 / densidade2);

            break;

        default:

            printf("Opção inválida!\n");
            return 1;
    }

    // =========================
    // SOMA FINAL
    // =========================

    printf("\n=====================================\n");
    printf("SOMA DOS ATRIBUTOS\n");
    printf("=====================================\n");

    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);

    // =========================
    // VENCEDOR FINAL
    // =========================

    printf("\n=====================================\n");
    printf("RESULTADO FINAL\n");
    printf("=====================================\n");

    if (soma1 > soma2) {

        printf("\nVencedor Final: %s\n", pais1);

    } else if (soma2 > soma1) {

        printf("\nVencedor Final: %s\n", pais2);

    } else {

        printf("\nEmpate!\n");
    }

    return 0;
}