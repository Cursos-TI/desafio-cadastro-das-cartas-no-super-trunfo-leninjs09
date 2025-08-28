#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // carta 1
    char estado[50] = "PA";
    char codigo[5] = "P01";
    char nome_cidade[20] = "Belem";
    int populacao = 30000000;
    float area = 1542.00; 
    float pib = 752.54;
    int num_pontos_turisticos = 75;
    float Densidade = 0;
    float PIBperCapita = 0;

/*
    printf("Qual o nome do estado:");
    scanf("%s", &estado[50]);
    printf("Qual o codigo:");    
    scanf("%s", &codigo[5]);
    printf("Qual cidade:");    
    scanf("%s", &nome_cidade[20]);    
    printf("Qual populacao:");    
    scanf("%i", &populacao);
    printf("Qual area:");    
    scanf("%f", &area);
    printf("Qual pib:");    
    scanf("%f", &pib);
    printf("Qual numero de pontos turisticos:");    
    scanf("%i", &num_pontos_turisticos);
   */
   
    Densidade = populacao / area;
    PIBperCapita = pib / populacao;
    
    printf("\n");
    
    printf("Carta 1\n");    
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turisticos: %d\n", num_pontos_turisticos);
    printf("Densidade populacional: %.2f\n", Densidade);
    printf("PIB per capita: %.2f reais\n", PIBperCapita);
    
    // carta 2
    printf("\n");    
    printf("\n");    
    
    printf("Carta 2\n"); 
    
    char estado2[20] = "SC";
    char codigo2[5] = "S02";
    char nome_cidade2[20] = "Florianopolis";
    int populacao2 = 1500000;
    float area2 = 1350.00; 
    float pib2 = 654.54;
    int num_pontos_turisticos2 = 356;
    float Densidade2 = 0;
    float PIBperCapita2 = 0;
    
    /*
    printf("Qual o nome do estado da carta 2:");
    scanf("%s", &estado2[50]);
    printf("Qual o codigo da carta 2:");    
    scanf("%s", &codigo2[5]);
    printf("Qual cidade da carta 2:");    
    scanf("%s", &nome_cidade2[20]);    
    printf("Qual populacao da carta 2:");    
    scanf("%i", &populacao2);
    printf("Qual area da carta 2:");    
    scanf("%f", &area2);
    printf("Qual pib da carta 2:");    
    scanf("%f", &pib2);
    printf("Qual numero de pontos turisticos da carta 2:");    
    scanf("%i", &num_pontos_turisticos2);   
    */
    
    Densidade2 = populacao2 / area2;
    PIBperCapita2 = pib2 / populacao2;    
 
    printf("\n");    
    
    printf("Carta 2\n");    
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", num_pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", Densidade2);
    printf("PIB per capita: %.2f reais\n", PIBperCapita2);

    printf("\n"); 
    
    // comparacao 
    printf("Comparação de atributos\n");    
    printf("\n");    
    printf("Carta 1 - %s (%s): %d\n", nome_cidade, estado, populacao);
    printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, populacao2); 
    if (populacao > populacao2)
      printf("Resultado: Carta 1 %s venceu \n", nome_cidade);
    else  
      printf("Resultado: Carta 2 %s venceu \n", nome_cidade2);
    
    return 0;
}
