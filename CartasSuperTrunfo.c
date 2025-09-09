#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Caio

int main() {
// ----- CARTA 1 -----
    char estado1;
    char codigo1[04];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int PontosTuristicos1;

// ----- CARTA 2 -----
    char estado2;
    char codigo2[04];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int PontosTuristicos2;

// Entrada de dados Carta 1
    printf("Cadastro da carta 1 \n");
    printf("Digite o estado: (A-H) \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (EX: A01): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf(" %s", cidade1);

    printf("Digite a População: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos1);

//Entrada de dados carta 2
    printf("\nCadastro da carta 2 \n");
    printf("Digite o estado: (A-H) \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (EX: B02): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite a População: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos2);

// Saída de dados 
    printf("\n=====================================================\n");   //utilizei esta linha para organizar as informações no terminal
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de pontos turísticos: %d \n", PontosTuristicos1);

    printf("\n=====================================================\n");
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de pontos turísticos: %d \n", PontosTuristicos2);
    printf("\n=========================\n");


    return 0;
}


