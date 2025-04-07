// #include <stdio.h>

int main() {
    char estado, estado1;
    char codigo[50], codigo1[50];
    char nome[40], nome1[40];
    int populacao, populacao1;
    int pontos, pontos1;
    float area, area1;
    float pib, pib1;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    float bilhao = 1000000000.0f;




    printf("Carta1:\n");

    printf("Estado:\n");
    scanf(" %c", &estado);

    printf("Codigo do estado:\n");
    scanf("%s", codigo);

    printf("Nome do estado:\n");
    scanf(" %[^\n]", nome);

    printf("População:\n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Pontos turísticos:\n");
    scanf("%d", &pontos);

    densidade1 = populacao / area;
    pibPerCapita1 = (pib * bilhao) / populacao;

    printf("\nCarta2:\n");

    printf("Estado:\n");
    scanf(" %c", &estado1);

    printf("Codigo do estado:\n");
    scanf("%s", codigo1);

    printf("Nome do estado:\n");
    scanf(" %[^\n]", nome1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Pontos turísticos:\n");
    scanf("%d", &pontos1);

    densidade2 = populacao1 / area1;
    pibPerCapita2 = (pib1 * bilhao) / populacao1;

    
    printf("\nCarta01\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome do Estado: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta02\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome do Estado: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    return 0;
}