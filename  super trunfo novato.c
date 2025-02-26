#include <stdio.h>

int main(){
    // variaveis primeira carta
    char carta1[3];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // variaveis segunda carta
    char carta2[3];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // cadastro primeira carta
    printf("Digite o codigo da primeira carta(ex: A01)");
    scanf("%s", carta1);
    printf("Digite a população:");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB(em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    //cadastro segunda carta
    printf("\nDigite o codigo da segunda carta(ex: B02): ");
    scanf("%s", carta2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    //exibição dados cadastrados
    printf("\n--- Dados das Cartas ---\n");
    printf("\nCarta: %s\nPopulação: %d\nÁrea: %.2f km²\nPontos Turisticos: %d\n",
         carta1, populacao1, area1, pib1, pontos_turisticos1);
    printf("\nCarta: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turisticos: %d\n",
         carta2, populacao2, area2, pib2, pontos_turisticos2);




    return 0;

}