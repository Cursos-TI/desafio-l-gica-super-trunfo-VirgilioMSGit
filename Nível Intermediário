#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4]; //codigo1[4] é suficiente para algo como "A01" (lembre que strings em C precisam de espaço para o caractere \0 no final).
    char nomeCidade1[100];
    unsigned int populacao1; // alteracao unsigned nivel mestre para aceitar valores maiores
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadep1; // entrada nova nivel intermediario
    float pibc1; // entrada nova nivel intermediario
    float superpoder1;  // entrada nova nivel mestre


    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned int populacao2; // alteracao unsigned nivel mestre para aceitar valores maiores
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadep2; // entrada nova nivel intermediario
    float pibc2; // entrada nova nivel intermediario
    float superpoder2; // entrada nova nivel mestre


    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes do %c em scanf(" %c", &estado1); evita problemas com o Enter deixado no buffer.

    printf("Código da Carta (ex: A01):");
    scanf("%s", codigo1);            

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); //scanf(" %[^\n]", ...) permite ler frases com espaços (como "Rio de Janeiro").

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²):");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais):");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &pontosTuristicos1);

    densidadep1  = (float) populacao1 / area1; // entrada nova nivel intermediario
    pibc1 = (float) pib1 / populacao1 *1000000000; // entrada nova nivel intermediario
    superpoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibc1 + (1 / densidadep1); // entrada nova nivel mestre

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01):");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadep2 = (float) populacao2 / area2; // entrada nova nivel intermediario
    pibc2 = (float) pib2/ populacao2 *1000000000; // entrada nova nivel intermediario
    superpoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibc2 + (1 / densidadep2); // entrada nova nivel mestre
    


    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1); 
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep1); // entrada nova nivel intermediario
    printf("PIB per Capta: %.2f reais\n", pibc1); // entrada nova nivel intermediario
    printf("Super Poder: %.2f\n", superpoder1); // entrada nova nivel mestre

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadep2); // entrada nova nivel intermediario
    printf("PIB per Capta: %.2f R$\n", pibc2); // entrada nova nivel intermediario
    printf("Super Poder: %.2f\n", superpoder2); // entrada nova nivel mestre

     // comparaçao cartas 
     
  int opcao;     // REMOVIDO COMPARACAO ANTERIOR E UTILIZADO OPCAO MENU PARA COMPARACAO (NIVEL AVENTUREIRO)

    printf("\n--- Menu de Comparação ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);

    printf("\n--- Comparação ---\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %u habitantes\n", nomeCidade1, populacao1);
            printf("%s: %u habitantes\n", nomeCidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);

            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões R$\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhões R$\n", nomeCidade2, pib2);

            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (menor vence)\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidadep1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidadep2);

            if (densidadep1 < densidadep2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (densidadep2 < densidadep1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 5.\n");
            break;
    }
   
       return 0;
}
