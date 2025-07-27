#include <stdio.h>

int main (){
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2, nome1[20], nome2[20], codigo_carta1[4], codigo_carta2[4];
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibCap1, pibCap2;
    float superPoder1, superPoder2;
    unsigned long int populacao1, populacao2;
    
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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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
    printf("------------------------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    densidade1 = (float)populacao1 / area1;
    pibCap1 = (float)pib1 / populacao1;

    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibCap1);
    printf("------------------------------------------------\n\n");

    // EXIBINDO DADOS DA CARTA 2: <---
    printf("------------------------------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    pibCap2 = (float)pib2 / populacao2;


    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibCap2);
    printf("------------------------------------------------\n\n");

    //CALCULANDO O SUPER PODER
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pibCap1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pibCap2 + (1 / densidade2);

    //Váriaveis para Armazenar os Resultados
    int resultadoPopulacao, resultadoArea, resultadoPIB, resultadoPontosTuristicos;
    int resultadoDensidade, resultadoPIBperCap, resultadoSuperPoder;

    //Comparação de Atributos
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPIB = pib1 > pib2;
    resultadoPontosTuristicos = pontos_turisticos1 > pontos_turisticos2;
    resultadoDensidade = densidade1 < densidade2;
    resultadoPIBperCap = pibCap1 > pibCap2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    printf("------------------------------------------------\n");
    printf("Comparação de Cartas:\n\n");
    //CALCULANDO RESULTADO POPULAÇÃO
    if (resultadoPopulacao){
        printf("População: Carta 1 Venceu (%d)\n", resultadoPopulacao);
    } else {
        printf("População: Carta 2 Venceu (%d)\n", resultadoPopulacao);
    }

    //CALCULANDO RESULTADO ÁREA
    if (resultadoArea){
        printf("Área: Carta 1 Venceu (%d)\n", resultadoArea);
    } else {
        printf("Área: Carta 2 Venceu (%d)\n", resultadoArea);
    }

    //CALCULANDO RESULTADO PIB
    if (resultadoPIB){
        printf("PIB: Carta 1 Venceu (%d)\n", resultadoPIB);
    } else {
        printf("PIB: Carta 2 Venceu (%d)\n", resultadoPIB);
    }

    //CALCULANDO RESULTADO PONTOS TURISTICOS
    if (resultadoPontosTuristicos){
        printf("Pontos Turisticos: Carta 1 Venceu (%d)\n", resultadoPontosTuristicos);
    } else {
        printf("Pontos Turisticos: Carta 2 Venceu (%d)\n", resultadoPontosTuristicos);
    }

    //CALCULANDO RESULTADO DENSIDADE
    if (resultadoDensidade){
        printf("Densidade: Carta 1 Venceu (%d)\n", resultadoDensidade);
    } else {
        printf("Densidade: Carta 2 Venceu (%d)\n", resultadoDensidade);
    }

    //CALCULANDO RESULTADO PIB per CAPITA
    if (resultadoPIBperCap){
        printf("PIB per Capita: Carta 1 Venceu (%d)\n", resultadoPIBperCap);
    } else {
        printf("PIB per Capita: Carta 2 Venceu (%d)\n", resultadoPIBperCap);
    }

    //CALCULANDO RESULTADO SUPER PODER
    if (resultadoSuperPoder){
        printf("Super Poder: Carta 1 Venceu (%d)\n", resultadoSuperPoder);
    } else {
        printf("Super Poder: Carta 2 Venceu (%d)\n", resultadoSuperPoder);
    }
    printf("------------------------------------------------\n");

    return 0;
}