#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2, nome1[20], nome2[20], codigo_carta1[4], codigo_carta2[4];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // REQUISIÇÃO DE DADOS PARA A CARTA 1: <---
    printf("Digite a Letra para Representar o Estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta 1: ");
    scanf("%s", codigo_carta1);
    
    printf("Digite o Nome da Cidade da Carta 1: ");
    scanf("%s", nome1);

    printf("Digite a População da Cidade da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n"); // Pula uma Linha

    // REQUISIÇÃO DE DADOS PARA A CARTA 2: <---
    printf("Digite a Letra para Representar o Estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta 2: ");
    scanf("%s", codigo_carta2);

    printf("Digite o Nome da Cidade da Carta 2: ");
    scanf("%s", nome2);

    printf("Digite a População da Cidade da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);
    
    printf("\n"); // Pula uma Linha
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // EXIBINDO DADOS DA CARTA 1: <---
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos1);

    // EXIBINDO DADOS DA CARTA 2: <---
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
