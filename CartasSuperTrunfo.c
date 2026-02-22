//Desafio novato super trunfo em c
#include <stdio.h>

int main(){
    //DIFININDO AS VARIAVEIS
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;


    //ENTRADA DE DADOS
    //CARTA 1

    printf("Digite o nome do primeiro estado: ");
    scanf("%s", estado1);
   
    printf("Digite o codigo do primeiro estado: ");
    scanf("%s", codigo1);
   
    printf("Digite a populacao do primeiro estado: ");
    scanf("%d", &populacao1);
   
    printf("Digite a area do primeiro estado: ");
    scanf("%f", &area1);
    
    printf("Digite o pib do primeiro estado: ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos do primeiro estado: \n");
    scanf("%d", &pontos_turisticos1);
    
    //CARTA 2
    
    printf("Digite o nome do segundo estado: \n");
    scanf(" %s", estado2);
   
    printf("Digite o codigo do segundo estado: \n");
    scanf(" %s", codigo2);
   
    printf("Digite a populacao do segundo estado: \n");
    scanf(" %d", &populacao2);
  
    printf("Digite a area do segundo estado: \n");
    scanf(" %f", &area2);
  
    printf("Digite o pib do segundo estado: \n");
    scanf(" %f", &pib2);
  
    printf("Digite o numero de pontos turisticos do segundo estado: \n");
    scanf(" %d", &pontos_turisticos2);
 
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // Exibição dos Dados das Cartas:
    
    printf("\n\nCARTA CADASTRADA 1");
    printf("\nCódigo do Estado 1: %s", codigo1);
    printf("\nNome do Estado 1: %s", estado1);
    printf("\nPopulacao: %d", populacao1);
    printf("\nArea: %.2f", area1);
    printf("\nPIB: %.2f", pib1);
    printf("\nPontos Turisticos: %d", pontos_turisticos1);

    printf("\n\nCARTA CADASTRADA 2");
    printf("\nCódigo do Estado 2: %s", codigo2);
    printf("\nNome do Estado 2: %s", estado2);
    printf("\nPopulacao: %d", populacao2);
    printf("\nArea: %.2f", area2);
    printf("\nPIB: %.2f", pib2);
    printf("\nPontos Turisticos: %d", pontos_turisticos2);

    
    return 0;
}