
// Inclusão das Bibliotecas
#include <stdio.h>
#include <string.h> //adicionar a biblioteca string

// Iniciando Função Main
int main() {

    // Função principal onde o programa começa
    char estado1;
    char codigo_carta1[1];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numero_pontos_turisticos1;
    float pib_per_capita1;
    float densidade1;

    // Carta 2
    char estado2;
    char codigo_carta2[1];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;



    printf("##################1####################\n");
    printf("********* DESAFIOS CARTAS ************\n");
    printf("######################################\n");

    // Entrada dos Dados ***Carta1****
    printf("\n---[CADASTRO -   | Carta 1]");
    printf("\nDigite o Estado (Letra 'A' a 'H'): ");
    scanf(" %c",&estado1); 
    printf("\nCodigo da Carta (ex: A01, B03): ");
    scanf(" %3s", &codigo_carta1);
    printf("\nNome da Cidade: ");
    getchar(); //Limpa o \n do buffer antes de fgets
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin); //Cadastra o nome da cidade
    nome_cidade1[strcspn(nome_cidade1, "" )] = '\0'; // remove \n do final
    printf("\nO numero de Habitantes: ");
    scanf("%d", &populacao1);
    printf("\nA area da cidade em Quilometros Quadrados: ");
    scanf("%f",&area1);
    printf("\nO Produto Interno Bruto da cidade: ");
    scanf("%f",&pib1);
    printf("\nA quantidade de Pontos Turisticos:");
    scanf("%d", &numero_pontos_turisticos1);
    densidade1 = populacao1/area1;
    pib_per_capita1 = pib1/populacao1;

    // Entrada dos Dados ***Carta2****
    printf("\n---[CADASTRO -   | Carta 2]");
    printf("\nDigite o Estado (Letra 'A' a 'H'): ");
    scanf(" %c",&estado2); 
    printf("\nCodigo da Carta (ex: A01, B03): ");
    scanf(" %3s", &codigo_carta2);
    printf("\nNome da Cidade: ");
    getchar(); //Limpa o \n do buffer antes de fgets
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin); //Cadastra o nome da cidade
    nome_cidade2[strcspn(nome_cidade2, "" )] = '\0'; // remove \n do final
    printf("\nO numero de Habitantes: ");
    scanf("%d", &populacao2);
    printf("\nA area da cidade em Quilometros Quadrados: ");
    scanf("%f",&area2);
    printf("\nO Produto Interno Bruto da cidade: ");
    scanf("%f",&pib2);
    printf("\nA quantidade de Pontos Turisticos:");
    scanf("%d", &numero_pontos_turisticos2);
    densidade2 = populacao2/area2;
    pib_per_capita2 = pib2/populacao2;


    /*Após o usuário inserir os dados das cartas, programa deve exibir na tela as informações cadastradas, 
    de forma organizada e legível. Para cada carta, imprima cada 
    informação em uma linha separada, com uma descrição clara.*/

    // Carta 1
    printf("---[Apresentando | Carta 1]\n");
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",codigo_carta1);
    printf("Nome da Cidade: %s\n",nome_cidade1);
    printf("Populacao: %d\n",populacao1);
    printf("Area: %.2f km²\n",area1);
    printf("PIB: R$%.2f\n",pib1);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$%.2f\n", pib_per_capita1);


    //Carta 2
    printf("---[Apresentando | Carta 2]\n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo_carta2);
    printf("Nome da Cidade: %s\n",nome_cidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %.2f km²\n",area2);
    printf("PIB: R$%.2f\n",pib2);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$%.2f\n", pib_per_capita2);

    // Finalizador do Sistema
   
    printf("\n============ fim ================\n\n");

    return 0; // Indica que o programa terminou corretamente
}