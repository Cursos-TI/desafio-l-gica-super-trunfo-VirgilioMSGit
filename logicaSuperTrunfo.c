#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

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
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio 

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

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
    

    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\n--- Comparação de Cartas (Critério: População) ---\n");
    printf("Carta 1 - %s: %d habitantes\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", nomeCidade2, populacao2);
    if (populacao1 > populacao2)
    printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    else if (populacao2 > populacao1)
    printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    else
    printf("Resultado: Empate!\n");

    return 0;
}
