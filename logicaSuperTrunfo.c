#include <stdio.h>

#define ATRIBUTO_ESCOLHIDO "PIB"

int main() {
    char codigo1[4], nome1[50];
    char codigo2[4], nome2[50];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, pib1, densidade_populacional1, pib_per_capita1;
    float area2, pib2, densidade_populacional2, pib_per_capita2;

    // Entrada de dados para a primeira carta
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome: ");
    scanf(" %[^\n]", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo de Densidade Populacional e PIB per capita
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Entrada de dados para a segunda carta
    printf("Codigo (ex: A02): ");
    scanf("%s", codigo2);

    printf("Nome: ");
    scanf(" %[^\n]", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo de Densidade Populacional e PIB per capita
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    printf("\n=== Comparação de Cartas (Atributo: %s) ===\n", ATRIBUTO_ESCOLHIDO);

    // Determinação do vencedor com base no atributo escolhido
    if (ATRIBUTO_ESCOLHIDO == "População") {
        printf("Carta 1 - %s: %lu\n", nome1, populacao1);
        printf("Carta 2 - %s: %lu\n", nome2, populacao2);
        printf("Resultado: %s venceu!\n", (populacao1 > populacao2) ? nome1 : nome2);
    } else if (ATRIBUTO_ESCOLHIDO == "Área") {
        printf("Carta 1 - %s: %.2f km²\n", nome1, area1);
        printf("Carta 2 - %s: %.2f km²\n", nome2, area2);
        printf("Resultado: %s venceu!\n", (area1 > area2) ? nome1 : nome2);
    } else if (ATRIBUTO_ESCOLHIDO == "PIB") {
        printf("Carta 1 - %s: %.2f bilhões\n", nome1, pib1);
        printf("Carta 2 - %s: %.2f bilhões\n", nome2, pib2);
        printf("Resultado: %s venceu!\n", (pib1 > pib2) ? nome1 : nome2);
    } else if (ATRIBUTO_ESCOLHIDO == "Densidade") {
        printf("Carta 1 - %s: %.2f hab/km²\n", nome1, densidade_populacional1);
        printf("Carta 2 - %s: %.2f hab/km²\n", nome2, densidade_populacional2);
        printf("Resultado: %s venceu!\n", (densidade_populacional1 < densidade_populacional2) ? nome1 : nome2);
    } else if (ATRIBUTO_ESCOLHIDO == "PIB per capita") {
        printf("Carta 1 - %s: %.2f\n", nome1, pib_per_capita1);
        printf("Carta 2 - %s: %.2f\n", nome2, pib_per_capita2);
        printf("Resultado: %s venceu!\n", (pib_per_capita1 > pib_per_capita2) ? nome1 : nome2);
    } else {
        printf("Erro: Atributo inválido!\n");
    }

    return 0;
}
