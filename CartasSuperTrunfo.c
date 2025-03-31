// #include <stdio.h>

int main() {
    char estado, estado1;
    char codigo[50], codigo1[50];
    char nome[40], nome1[40];
    int populacao, populacao1;
    int pontos, pontos1;
    float area, area1;
    float pib, pib1;

    printf("Carta1:\n");

    printf("Estado:\n");
    scanf(" %c", &estado);

    printf("Codigo do estado:\n");
    scanf("%s", codigo);

    printf("Nome do estado:\n");
    scanf("%s", nome);

    printf("População:\n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Pontos turísticos:\n");
    scanf("%d", &pontos);

    printf("\nCarta2:\n");

    printf("Estado:\n");
    scanf(" %c", &estado1);

    printf("Codigo do estado:\n");
    scanf("%s", codigo1);

    printf("Nome do estado:\n");
    scanf("%s", nome1);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Pontos turísticos:\n");
    scanf("%d", &pontos1);

    printf("\nCarta01\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome do Estado: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos);

    printf("\nCarta02\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome do Estado: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    return 0;
}