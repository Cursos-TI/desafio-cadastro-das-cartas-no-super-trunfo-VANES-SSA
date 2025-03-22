#include <stdio.h>

// Desafio Super Trunfo - Países
// Programador Vanessa.

int main() {
   printf("Desafio Países\n");
   
    // Declaração de variáveiveis para primeir carta.
    char estado1[2];
    char cidade1[50];
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração de variantes para segunda carta.
    char estado2[2]; 
    char cidade2[50];
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da primeira Cartas.
    printf(" \nCadastro da primeira carta:\n");
    printf("Digite o estado (A-H):");  // Digite o estado escolhendo a letra de (A ate H)
    scanf("%s", estado1);
    printf("Digite a cidade (01-04):");  // Digite a cidade escolhendo o numero de 01 ate 04
    scanf("%s", cidade1);
    printf("Digite o código da carta:");  // O codigo da cidade é a letra do estado + numero da cidade (EX: A01).
    scanf(" %s", codigo1);
    printf("Digite a população: ");
    scanf(" %d", &populacao1);
    printf("Digite a área (em km²):");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turístico:");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda Carta.
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o estado (A-H): ");   // Digite o estado escolhendo a letra de (A ate H).
    scanf("%s", estado2);
    printf("Digite a cidade (01-04):");   //Digite a cidade escolhendo um numero entre 01 e 04
    scanf("%s", cidade2);
    printf("Digite o código da carta:"); // o codigo da carta é a soma do estado + cidade Ex: B01
    scanf("%s", codigo2);
    printf("Digite a população:");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²):");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões):");
    scanf("%f", &pib2);
    printf("Digite os pontos Turísticos:");
    scanf("%d", &pontosTuristicos2);

    //Exibição da primeira carta
    printf("\ncarta1\n");
    printf("Estado: %s\n",estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontosTuristicos1);

    //Exibição da segunda carta
    printf("\ncarta2\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.3f em bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);








    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
