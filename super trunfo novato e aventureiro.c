#include <stdio.h>

int main(){
    // variaveis primeira carta
    char carta1[3];
    char nome_cidade1[20];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float PIB_per_capta1;

    // variaveis segunda carta
    char carta2[3];
    char nome_cidade2[20];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float PIB_per_capta2;

    // cadastro primeira carta
    printf("Digite o codigo da primeira carta(ex: A01)");
    scanf("%s", carta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);
    printf("Digite a população:");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB(em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    //Adição PIB Per Capta e Densidade populacional carta1

    densidade_populacional1 = (float)(populacao1 / area1);

    PIB_per_capta1 = (float)(pib1 / populacao1);

    //cadastro segunda carta
    printf("\nDigite o codigo da segunda carta(ex: B02): ");
    scanf("%s", carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    //Adição PIB Per Capta e Densidade populacional carta2

    densidade_populacional2 = (float)(populacao2 / area2);

    PIB_per_capta2 = (float)(pib2 / populacao2);

    //exibição dados cadastrados
    printf("\n--- Dados das Cartas ---\n");
    printf("\nCarta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPontos Turisticos: %d\nDensidade populacional: %.2f\nPIB per capta: %.2f\n",
         carta1, nome_cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, PIB_per_capta1);
    printf("\nCarta: %s\nNome da Cidade: \nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turisticos: %d\nDensidade populacional: %.2f\nPIB per capta: %.2f\n",
         carta2, nome_cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, PIB_per_capta2 );

    return 0;

}
