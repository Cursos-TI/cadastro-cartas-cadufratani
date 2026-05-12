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
    // MENU
    // =========================

    int opcao;

    printf("=====================================\n");
    printf("      SUPER TRUNFO DE PAÍSES\n");
    printf("=====================================\n");

    printf("\nEscolha o atributo para comparação:\n\n");

    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    printf("\nDigite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\n=====================================\n");
    printf("RESULTADO DA COMPARAÇÃO\n");
    printf("=====================================\n\n");

    // =========================
    // SWITCH
    // =========================

    switch(opcao) {

        // =========================
        // POPULAÇÃO
        // =========================

        case 1:

            printf("Atributo escolhido: População\n\n");

            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n\n", pais2, populacao2);

            if (populacao1 > populacao2) {

                printf("Vencedor: %s\n", pais1);

            } else if (populacao2 > populacao1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            break;

        // =========================
        // ÁREA
        // =========================

        case 2:

            printf("Atributo escolhido: Área\n\n");

            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n\n", pais2, area2);

            if (area1 > area2) {

                printf("Vencedor: %s\n", pais1);

            } else if (area2 > area1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            break;

        // =========================
        // PIB
        // =========================

        case 3:

            printf("Atributo escolhido: PIB\n\n");

            printf("%s: %.2f trilhões\n", pais1, pib1);
            printf("%s: %.2f trilhões\n\n", pais2, pib2);

            if (pib1 > pib2) {

                printf("Vencedor: %s\n", pais1);

            } else if (pib2 > pib1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            break;

        // =========================
        // PONTOS TURÍSTICOS
        // =========================

        case 4:

            printf("Atributo escolhido: Pontos Turísticos\n\n");

            printf("%s: %d pontos turísticos\n", pais1, pontosTuristicos1);
            printf("%s: %d pontos turísticos\n\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {

                printf("Vencedor: %s\n", pais1);

            } else if (pontosTuristicos2 > pontosTuristicos1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            break;

        // =========================
        // DENSIDADE DEMOGRÁFICA
        // =========================

        case 5:

            printf("Atributo escolhido: Densidade Demográfica\n\n");

            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n\n", pais2, densidade2);

            // REGRA INVERTIDA:
            // MENOR DENSIDADE VENCE

            if (densidade1 < densidade2) {

                printf("Vencedor: %s\n", pais1);

            } else if (densidade2 < densidade1) {

                printf("Vencedor: %s\n", pais2);

            } else {

                printf("Empate!\n");
            }

            break;

        // =========================
        // OPÇÃO INVÁLIDA
        // =========================

        default:

            printf("Opção inválida!\n");
    }

    return 0;
}