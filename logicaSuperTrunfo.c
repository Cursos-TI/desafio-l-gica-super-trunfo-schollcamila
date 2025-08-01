#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    char estado1[50];
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da Carta 2
    char estado2[50];
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

   
    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (sem espacos): ");
    scanf("%s", estado1);

    printf("Codigo da Carta (sem espacos): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    //Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (sem espacos): ");
    scanf("%s", estado2);

    printf("Codigo da Carta (sem espacos): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (sem espacos): ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

     // Calculo dos Atributos Derivados
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // comparação
    //PIB per capita
    printf("\nComparacao de cartas (Atributo: PIB per capita):\n\n");

    printf("Carta 1 - %s (%s): R$ %.6f\n", cidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%s): R$ %.6f\n", cidade2, estado2, pibPerCapita2);

    //maior PIB per capita vence
    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}