#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int menu;
    int atributo;

    // Carta 1
    char estado1[50], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Carta 2
    char estado2[50], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // Menu principal
    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("\n Iniciando o Jogo\n");

            // Cadastro Carta 1
            printf("\nCadastro da Carta 1:\n");
            printf("Estado: ");
            scanf("%s", estado1);
            printf("Nome da Cidade: ");
            scanf("%s", cidade1);
            printf("Populacao: ");
            scanf("%d", &populacao1);
            printf("Area (km2): ");
            scanf("%f", &area1);
            printf("PIB (em bilhoes R$): ");
            scanf("%f", &pib1);
            printf("Quantidade de Pontos Turisticos: ");
            scanf("%d", &pontosTuristicos1);

            // Cadastro Carta 2
            printf("\nCadastro da Carta 2:\n");
            printf("Estado: ");
            scanf("%s", estado2);
            printf("Nome da Cidade: ");
            scanf("%s", cidade2);
            printf("Populacao: ");
            scanf("%d", &populacao2);
            printf("Area (km2): ");
            scanf("%f", &area2);
            printf("PIB (em bilhoes R$): ");
            scanf("%f", &pib2);
            printf("Quantidade de Pontos Turísticos: ");
            scanf("%d", &pontosTuristicos2);

            float densidade1 = populacao1 / area1;
            float densidade2 = populacao2 / area2;
            float pibPerCapita1 = pib1 / populacao1;
            float pibPerCapita2 = pib2 / populacao2;

            do {

            //Atributos
            printf("\nEscolha o atributo para comparar:\n");
            printf("1. Nome da Cidade\n");
            printf("2. Populacao\n");
            printf("3. Area\n");
            printf("4. PIB\n");
            printf("5. Quantidade de Pontos Turísticos\n");
            printf("6. Densidade Demografica\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &atributo);

          
               switch (atributo) {
                case 1:
                    printf("Carta 1: %s (%s)\n", cidade1, estado1);
                    printf("Carta 2: %s (%s)\n", cidade2, estado2);
                    break;

                case 2:
                    printf("População:\n");
                    printf("Carta 1: %d\n", populacao1);
                    printf("Carta 2: %d\n", populacao2);

                    if (populacao1 > populacao2)
                        printf("Carta 1 (%s) venceu!\n", cidade1);
                    else if (populacao2 > populacao1)
                        printf("Carta 2 (%s) venceu!\n", cidade2);
                    else
                        printf("Empate!\n");
                    break;
    
                case 3:
                    printf("Área:\n");
                    printf("Carta 1: %.2f km²\n", area1);
                    printf("Carta 2: %.2f km²\n", area2);

                    if (area1 > area2)
                        printf("Carta 1 (%s) venceu!\n", cidade1);
                    else if (area2 > area1)
                        printf("Carta 2 (%s) venceu!\n", cidade2);
                    else
                        printf("Empate!\n");
                    break;

                case 4:
                    printf("PIB per capita:\n");
                    printf("Carta 1: R$ %.6f\n", pibPerCapita1);
                    printf("Carta 2: R$ %.6f\n", pibPerCapita2);

                    if (pibPerCapita1 > pibPerCapita2)
                        printf("Carta 1 (%s) venceu!\n", cidade1);
                    else if (pibPerCapita2 > pibPerCapita1)
                        printf("Carta 2 (%s) venceu!\n", cidade2);
                    else
                        printf("Empate!\n");
                    break;

                case 5:
                    printf("Pontos Turísticos:\n");
                    printf("Carta 1: %d\n", pontosTuristicos1);
                    printf("Carta 2: %d\n", pontosTuristicos2);

                    if (pontosTuristicos1 > pontosTuristicos2)
                        printf("Carta 1 (%s) venceu!\n", cidade1);
                    else if (pontosTuristicos2 > pontosTuristicos1)
                        printf("Carta 2 (%s) venceu!\n", cidade2);
                    else
                        printf("Empate!\n");
                    break;

                case 6:
                    printf("Densidade Demográfica:\n");
                    printf("Carta 1: %.2f hab/km²\n", densidade1);
                    printf("Carta 2: %.2f hab/km²\n", densidade2);

                    if (densidade1 < densidade2)
                        printf("Carta 1 (%s) venceu!\n", cidade1);
                    else if (densidade2 < densidade1)
                        printf("Carta 2 (%s) venceu!\n", cidade2);
                    else
                        printf("Empate!\n");
                    break;

                default:
                    printf("Opção de atributo inválida.\n");
            }

                printf("\nDeseja comparar outro atributo? (1 - Sim / 0 - Não): ");
                scanf("%d", &repetir);
            } while (repetir == 1);

            printf("\nEncerrando comparações...\n");
            break;

 

        case 2:
            printf("\nRegras do Jogo\n");
            printf("- Voce deve cadastrar duas cartas com os atributos solicitados\n");
            printf("- Escolha um atributo para comparar as cartas\n");
            printf("- Vence a carta com maior valor no atributo (exceto na densidade demografica pois vence a menor)\n");
            break;

        case 3:
            printf("Saindo do jogo...\n");
            break;

        default:
            printf("Opção inválida. Reinicie o programa.\n");
    }

    return 0;
}
