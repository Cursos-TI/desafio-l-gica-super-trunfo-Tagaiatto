#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1[3], codigo1[4], nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    
    char estado2[3], codigo2[4], nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    //Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (Sigla): ");
    scanf("%2s", estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (Sigla): ");
    scanf("%2s", estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    // Comparação de População
    printf("Atributo: População\n");
    if (populacao1 > populacao2) {
        printf("Vencedor: Carta 1 (%s)\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Vencedor: Carta 2 (%s)\n", nome2);
    } else {
        printf("Empate!\n");
    }

    // Comparação de Área
    printf("\nAtributo: Área\n");
    if (area1 > area2) {
        printf("Vencedor: Carta 1 (%s)\n", nome1);
    } else if (area2 > area1) {
        printf("Vencedor: Carta 2 (%s)\n", nome2);
    } else {
        printf("Empate!\n");
    }

    // Comparação de PIB
    printf("\nAtributo: PIB\n");
    if (pib1 > pib2) {
        printf("Vencedor: Carta 1 (%s)\n", nome1);
    } else if (pib2 > pib1) {
        printf("Vencedor: Carta 2 (%s)\n", nome2);
    } else {
        printf("Empate!\n");
    }

    // Comparação de Pontos Turísticos
    printf("\nAtributo: Pontos Turísticos\n");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Vencedor: Carta 1 (%s)\n", nome1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Vencedor: Carta 2 (%s)\n", nome2);
    } else {
        printf("Empate!\n");
    }

    printf("\n================================\n");

    return 0;
}
