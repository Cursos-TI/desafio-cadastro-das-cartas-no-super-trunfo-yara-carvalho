#include <stdio.h>

int main() {
    char estado, estado1;
    char codigo[50], codigo1[50];
    char nome[40], nome1[40];
    unsigned long int populacao, populacao1;
    int pontos, pontos1;
    float area, area1;
    float pib, pib1;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    float bilhao = 1000000000.0f;

    // Leitura dos dados - Carta 1
    printf("Carta1:\n");

    printf("Estado:\n");
    scanf(" %c", &estado);

    printf("Codigo do estado:\n");
    scanf("%s", codigo);

    printf("Nome do estado:\n");
    scanf(" %[^\n]", nome);

    printf("População:\n");
    scanf("%lu", &populacao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Pontos turísticos:\n");
    scanf("%d", &pontos);

    // Cálculos da Carta 1
    densidade1 = populacao / area;
    pibPerCapita1 = (pib * bilhao) / populacao;
    superPoder1 = (float)populacao + area + pib + pontos + pibPerCapita1 + (1.0f / densidade1);

    // Leitura dos dados - Carta 2
    printf("\nCarta2:\n");

    printf("Estado:\n");
    scanf(" %c", &estado1);

    printf("Codigo do estado:\n");
    scanf("%s", codigo1);

    printf("Nome do estado:\n");
    scanf(" %[^\n]", nome1);

    printf("População:\n");
    scanf("%lu", &populacao1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Pontos turísticos:\n");
    scanf("%d", &pontos1);

    // Cálculos da Carta 2
    densidade2 = populacao1 / area1;
    pibPerCapita2 = (pib1 * bilhao) / populacao1;
    superPoder2 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita2 + (1.0f / densidade2);

    // Exibição das Cartas
    printf("\nCarta01\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome do Estado: %s\n", nome);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta02\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome do Estado: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao1);
    printf("Área: Carta 1 venceu (%d)\n", area > area1);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib1);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos > pontos1);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}