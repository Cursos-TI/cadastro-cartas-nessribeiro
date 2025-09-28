#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado1[20], Estado2[20];
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[20], nomeCidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontosTuristicos1, pontosTuristicos2;
  
  // Área para entrada de dados
    printf("Olá! Seja bem vinda(o) ao Super Trunfo - Cidades \n");
    printf("Para iniciar o jogo precisaremos das informações das cidades escolhidas. \n");
    printf("Nas próximas etapas insira as informações da 1ª carta: \n");

    //Recebendo as informações da primeira carta
    printf("Digite a categoria do Estado (A a H): \n");
    scanf("%s", &Estado1);
    
    printf("Digite o código da carta: (primeira letra + dois digitos de 01 a 04)\n");
    scanf("%s", &codigoCarta1);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade1);

    printf("Insira o número populacional: \n");
    scanf("%i", &populacao1);

    printf("Insira a área desta cidade em km: \n");
    scanf("%f", &area1);
    
    printf("Insira o PIB: \n");
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos turisticos que essa cidade tem: \n");
    scanf("%i", &pontosTuristicos1);

    //Recebendo as informações da segunda carta
    printf("Agora insira os dados da 2ª Carta \n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado2);
    
    printf("Digite o código da carta: (primeira letra + dois digitos de 01 a 04)\n");
    scanf("%s", &codigoCarta2);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade2);

    printf("Insira o número populacional: \n");
    scanf("%i", &populacao2);

    printf("Insira a área desta cidade em km: \n");
    scanf("%f", &area2);
    
    printf("Insira o PIB: \n");
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos turisticos que essa cidade tem: \n");
    scanf("%i", &pontosTuristicos2);
  
  // Área para exibição dos dados da cidade
    printf("As cartas inseridas foram: \n");
    //impressão da carta 1
    printf("Carta 1: \n");
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("Estado: %s \n", Estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("População: %i \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turisticos: %i \n", pontosTuristicos1);
    //impressão da carta 1
    printf("Carta 2: \n");
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("Estado: %s \n", Estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("População: %i \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turisticos: %i \n", pontosTuristicos2);
return 0;
} 
