#include <stdio.h>
printf ("Desafio Trunfo!/n");
printf ("Novo Commit!/n");

 char estado;
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("Digite o estado (A): ");
    scanf(" %c", &estado);

    printf("Digite o código (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);  // Lê nome com espaços

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
  
return 0;
} 