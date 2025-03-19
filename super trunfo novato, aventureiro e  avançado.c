#include <stdio.h>

int main(){
    // variaveis primeira carta
    char nome_cidade1[20];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float PIB_per_capta1;
    float super_poder1;

    // variaveis segunda carta
    char nome_cidade2[20];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float PIB_per_capta2;
    float super_poder2;

    // cadastro primeira carta
    printf("\n---Primeira carta---\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("Digite a população:");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB(em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    //Adição PIB Per Capta e Densidade populacional carta1

    densidade_populacional1 = (float)(populacao1 / area1);

    PIB_per_capta1 = (float)(pib1 / populacao1);

    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + densidade_populacional1 + PIB_per_capta1;
    //cadastro segunda carta
    printf("\n---Segunda carta---\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    //Adição PIB Per Capta e Densidade populacional carta2

    densidade_populacional2 = (float)(populacao2 / area2);

    PIB_per_capta2 = (float)(pib2 / populacao2);

    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_populacional2 + PIB_per_capta2;

    //exibição dados cadastrados
    printf("\n--- Dados das Cartas ---\n");
    printf("\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPontos Turisticos: %d\nDensidade populacional: %.2f\nPIB per capta: %.2f\nSuper Poder: %.2f\n",
          nome_cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, PIB_per_capta1, super_poder1);
    printf("\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turisticos: %d\nDensidade populacional: %.2f\nPIB per capta: %.2f\nSuper Poder: %.2f\n",
          nome_cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, PIB_per_capta2, super_poder2);

          //Comparando os valores
          printf("\n---Comparando os valores 1 para verdadeiro(Primeira carta vence) e 0 para falso(Segunda carta vence)---\n");
          printf("População: %d\n", populacao1 > populacao2);
          printf("Area: %d\n", area1 > area2);
          printf("Pontos Turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
          printf("Densidade populacional: %d\n", densidade_populacional1 > densidade_populacional2);
          printf("PIB Per Capta: %d\n", PIB_per_capta1 > PIB_per_capta2);
          printf("Super Poder: %d\n", super_poder1 > super_poder2);


    return 0;

}
