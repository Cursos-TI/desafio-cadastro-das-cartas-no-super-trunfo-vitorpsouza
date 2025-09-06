#include <stdio.h>

int main()
{

    char estado1, codigocarta1[3], nomecidade1[20];
    int populacao1, numeropontosturisticos1;
    float area1, pib1;

    char estado2, codigocarta2[3], nomecidade2[20];
    int populacao2, numeropontosturisticos2;
    float area2, pib2;

    printf("digite o estado da carta 1: \n");
    scanf(" %c", &estado1);

    printf("digite o codigo da carta 1: \n");
    scanf("%s", codigocarta1);

    printf("digite o nome da cidade da carta 1: \n");
    scanf("%s", nomecidade1);

    printf("digite a populaçao da carta 1: \n");
    scanf("%d", &populacao1);

    printf("digite a area da carta 1: \n");
    scanf("%f", &area1);

    printf("digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("digite o numero de pontos turisticos da carta 1: \n");
    scanf("%d", &numeropontosturisticos1);

    printf("digite o estado da carta 2: \n");
    scanf(" %c", &estado2);

    printf("digite o codigo da carta 2: \n");
    scanf("%s", codigocarta2);

    printf("digite o nome da cidade da carta 2: \n");
    scanf("%s", nomecidade2);

    printf("digite a populaçao da carta 2: \n");
    scanf("%d", &populacao2);

    printf("digite a area da carta 2: \n");
    scanf("%f", &area2);

    printf("digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos da carta 2: \n");
    scanf("%d", &numeropontosturisticos2);

    printf("\nInformações da carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", numeropontosturisticos1);

    printf("\nInformações da carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", numeropontosturisticos2);

    return 0;
}
