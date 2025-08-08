#include <stdio.h>


int main() {
    // Variáveis da Carta 1
   
    char estado1[50];
    char codigocarta1[50];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;


    // Variáveis da Carta 2
   
    char estado2[50];
    char codigocarta2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;

    // Dados carta 1
    
    printf("SEJA BEM VINDO AO JOGO SUPER TRUNFO!\n");
    printf("Insira o Estado da carta 1:\n");
    scanf("%s", estado1);
    
    printf("insira o código da carta 1:\n");
    scanf("%s", codigocarta1);

    printf("insira a cidade da carta 1:\n");
    scanf("%s", cidade1);

    printf("insira a populacao da carta 1:\n");
    scanf("%d", &populacao1);

    printf("insira a area da carta 1:\n");
    scanf("%f", &area1);

    printf("insira o pib da carta 1:\n");
    scanf("%f", &pib1);

    printf("insira os pontos turísticos da carta 1\n");
    scanf("%d", &turismo1);

    // Dados da carta2

    printf("AGORA INSIRA OS DADOS DA CARTA 2\n");
    
    printf("Insira o Estado da carta 2:\n");
    scanf("%s", estado2);
    
    printf("insira o código da carta 2:\n");
    scanf("%s", codigocarta2);

    printf("insira a cidade da carta 2:\n");
    scanf("%s", cidade2);

    printf("insira a populacao da carta 2:\n");
    scanf("%d", &populacao2);

    printf("insira a area da carta 2:\n");
    scanf("%f", &area2);

    printf("insira o pib da carta 2:\n");
    scanf("%f", &pib2);

    printf("insira os pontos turísticos da carta 2:\n");
    scanf("%d", &turismo2);


    // Saida dos dados CARTA 1
   
    printf("INFORMACOES DA CARTA 1!\n");

    printf("O Estado é: %s\n", estado1);
    printf("O código é: %s\n", codigocarta1);
    printf("A cidade é: %s\n", cidade1);
    printf("A populacao é: %d\n", populacao1);
    printf("A área é: %f\n", area1);
    printf("O PIB é: %f\n", pib1);
    printf("Os pontos turísticos sao: %d\n", turismo1);

     // Saida dos dados CARTA 2
   
    printf("INFORMACOES DA CARTA 2!\n");

    printf("O Estado é: %s\n", estado2);
    printf("O código é: %s\n", codigocarta2);
    printf("A cidade é: %s\n", cidade2);
    printf("A populacao é: %d\n", populacao2);
    printf("A área é: %f\n", area2);
    printf("O PIB é: %f\n", pib2);
    printf("Os pontos turísticos sao: %d\n", turismo2);

   
 
    return 0;
}