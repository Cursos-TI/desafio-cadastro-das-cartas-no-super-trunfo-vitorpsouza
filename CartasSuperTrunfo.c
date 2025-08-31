#include <stdio.h>

int main() {
    
    char estado, codigocarta[3], nomecidade[20];
    int populacao, numeropontosturisticos;
    float area, pib;

    printf("digite o estado: \n");
    scanf ("%c", &estado);

    printf("digite o codigo da carta: \n");
    scanf("%s", codigocarta);

    printf("digite o nome da cidade: \n");
    scanf("%s", nomecidade);

    printf("digite a populaçao: \n");
    scanf("%d", &populacao);

    printf("digite a area: \n");
    scanf("%f", &area);

    printf("digite o PIB: \n");
    scanf("%f", &pib);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &numeropontosturisticos);

    printf("informaçoes da carta 1: \n");
    printf("estado: %c - codigo da carta: %s - nome da cidade: %s - populaçao: %d - area: %f - PIB: %f - numero de pontos turisticos: %d"
    , estado, codigocarta, nomecidade, populacao, area, pib, numeropontosturisticos);




    return 0;

}
