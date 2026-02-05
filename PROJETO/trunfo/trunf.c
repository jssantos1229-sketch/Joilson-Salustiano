#include <stdio.h>

int main() {

    printf ("Desafio Trunfo!/n");
printf ("Novo Commit!/n"); 

    char estado[50];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // ===== ENTRADA DA CARTA =====
    printf("\nInsira os dados da primeira carta:\n");

    printf("Nome do estado: ");
    scanf(" %[^\n]", estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área em km²: ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // ===== SAÍDA =====
    printf("\n===== CARTA CADASTRADA =====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
