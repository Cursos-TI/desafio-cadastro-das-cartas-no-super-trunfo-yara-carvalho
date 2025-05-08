#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[3], codigo1[10], nome1[40];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    float densidade1, pibPerCapita1;

    // Variáveis da Carta 2
    char estado2[3], codigo2[10], nome2[40];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    float densidade2, pibPerCapita2;

    float bilhao = 1000000000.0f;

    // Entrada dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    getchar(); // Limpa o buffer
    scanf(" %[^\n]", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * bilhao) / populacao1;

    // Entrada dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    getchar();
    scanf(" %[^\n]", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * bilhao) / populacao2;

    // === Comparações ===

    // 1. PIB per capita
    printf("\nComparação por PIB per capita:\n");
    printf("Carta 1: %.2f | Carta 2: %.2f\n", pibPerCapita1, pibPerCapita2);
    if (pibPerCapita1 > pibPerCapita2)
        printf("Carta 1 (%s) venceu!\n", nome1);
    else if (pibPerCapita2 > pibPerCapita1)
        printf("Carta 2 (%s) venceu!\n", nome2);
    else
        printf("Empate!\n");

    // 2. População
    printf("\nComparação por População:\n");
    printf("Carta 1: %d | Carta 2: %d\n", populacao1, populacao2);
    if (populacao1 > populacao2)
        printf("Carta 1 (%s) venceu!\n", nome1);
    else if (populacao2 > populacao1)
        printf("Carta 2 (%s) venceu!\n", nome2);
    else
        printf("Empate!\n");

    // 3. Densidade Populacional (MENOR vence)
    printf("\nComparação por Densidade Populacional (menor vence):\n");
    printf("Carta 1: %.2f hab/km² | Carta 2: %.2f hab/km²\n", densidade1, densidade2);
    if (densidade1 < densidade2)
        printf("Carta 1 (%s) venceu!\n", nome1);
    else if (densidade2 < densidade1)
        printf("Carta 2 (%s) venceu!\n", nome2);
    else
        printf("Empate!\n");

    return 0;
}
