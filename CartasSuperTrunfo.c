#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // carta 1
  char estado1;
  char codigo1[4];
  char cidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;
  float densidade1;
  float pibpercapta1;
  float superpoder1;

  // carta 2
  char estado2;
  char codigo2[4];
  char cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;
  float densidade2;
  float pibpercapta2;
  float superpoder2;


  // Área para entrada de dados
  // carta1
  printf("CADASTRO DA CARTA 1\n\n");

  printf("Digite o estado (A-H): \n");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta (ex: A01): \n");
  scanf("%s", codigo1);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade1);

  printf("Digite a populacao: \n");
  scanf("%lu", &populacao1);

  printf("Digite a area (km): \n");
  scanf("%f", &area1);

  printf("Digite o PIB: \n");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos: \n");
  scanf("%d", &pontosturisticos1);

  // carta 2
  printf("CADASTRO DA CARTA 2\n\n");

  printf("Digite o estado (A-H): \n");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta (ex: B02): \n");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", cidade2);

  printf("Digite a populacao: \n");
  scanf("%lu", &populacao2);

  printf("Digite a area (km): \n");
  scanf("%f", &area2);

  printf("Digite o PIB: \n");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: \n");
  scanf("%d", &pontosturisticos2); 

  // Área para os cálculos
  densidade1 = populacao1 / area1;
  pibpercapta1 = (pib1 * 1000000000) / populacao1;

  densidade2 = populacao2 / area2;
  pibpercapta2 = (pib2 * 1000000000) / populacao2;

  superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + (1 / densidade1);
  superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + (1 / densidade2);

  // Área para exibição dos dados da cidade
  // carta1
  printf("\n\nCARTA 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f Km\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f hab/km\n", densidade1);
  printf("PIB per capta: %.2f \n", pibpercapta1);

  // carta2
  printf("\n\nCARTA 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f Km\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f hab/km\n", densidade2);
  printf("PIB per capta: %.2f \n", pibpercapta2);

  printf("\nCOMPARACAO DE CARTAS:\n");
  printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2);

  // REGRA ESPECIAL
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapta1 > pibpercapta2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);



return 0;
} 
