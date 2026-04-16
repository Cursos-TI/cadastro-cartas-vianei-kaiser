
// Inclusão das Bibliotecas
#include <stdio.h>
#include <string.h> //adicionar a biblioteca string

// Iniciando Função Main
int main() {

    // Função principal onde o programa começa
    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numero_pontos_turisticos1;
    float pib_per_capita1;
    float densidade1;
    float superpoder1;

    // Carta 2
    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float superpoder2;



    printf("##################3####################\n");
    printf("********* DESAFIOS CARTAS ************\n");
    printf("######################################\n");

    // Entrada dos Dados ***Carta1****
    printf("\n---[CADASTRO -   | Carta 1]");
    printf("Digite o Estado (Letra 'A' a 'H'): ");
    scanf(" %c",&estado1); 
    printf("Codigo da Carta (01, 02): ");
    scanf(" %3s", &codigo_carta1);
    printf("Nome da Cidade: ");
    getchar(); //Limpa o \n do buffer antes de fgets
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin); //Cadastra o nome da cidade
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0'; // remove \n do final
    printf("O numero de Habitantes: ");
    scanf("%d", &populacao1);
    printf("A area da cidade em Quilometros Quadrados: ");
    scanf("%f",&area1);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f",&pib1);
    printf("A quantidade de Pontos Turisticos: ");
    scanf("%d", &numero_pontos_turisticos1);
    densidade1 = populacao1/area1;
    pib_per_capita1 = pib1/populacao1;
    superpoder1 = (float)populacao1+area1+pib1+(float)numero_pontos_turisticos1+pib_per_capita1+(1.0/densidade1);

    // Entrada dos Dados ***Carta2****
    printf("\n\n---[CADASTRO -   | Carta 2]");
    printf("Digite o Estado (Letra 'A' a 'H'): ");
    scanf(" %c",&estado2); 
    printf("Codigo da Carta (ex: 01, 03): ");
    scanf(" %3s", &codigo_carta2);
    printf("Nome da Cidade: ");
    getchar(); //Limpa o \n do buffer antes de fgets
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin); //Cadastra o nome da cidade
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0'; // remove \n do final
    printf("O numero de Habitantes: ");
    scanf("%d", &populacao2);
    printf("A area da cidade em Quilometros Quadrados: ");
    scanf("%f",&area2);
    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f",&pib2);
    printf("A quantidade de Pontos Turisticos: ");
    scanf("%d", &numero_pontos_turisticos2);
    densidade2 = populacao2/area2;
    pib_per_capita2 = pib2/populacao2;
    superpoder2 = (float)populacao2+area2+pib2+(float)numero_pontos_turisticos2+pib_per_capita2+(1.0/densidade2);

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
    printf("PIB: R$ %.2f\n",pib1);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Superpoder1: %.2f\n",superpoder1);


    //Carta 2
    printf("\n\n---[Apresentando | Carta 2]\n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo_carta2);
    printf("Nome da Cidade: %s\n",nome_cidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %.2f km²\n",area2);
    printf("PIB: R$ %.2f\n",pib2);
    printf("Numero de Pontos Turisticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Superpoder2: %.2f\n",superpoder2);

    // Finalizador do Sistema
   
    printf("\n============ fim ================\n\n");

    // COMPARAR CARTAS

    printf("--------------------------------------\n");
    printf("********* BATALHA DAS CARTAS**********\n");
    printf("--------------------------------------\n");

    if (populacao1 > populacao2){
        printf("A população da carta 1 venceu!\n");
    }
    else{
        printf("A população da carta 2 venceu!\n");
    }
    
    // Atributo area
    if (area1 > area2){
        printf("A área da carta 1 venceu!\n");
    }
    else{
        printf("A área da carta 2 venceu!\n");
    }

    // Atributo PIB 
    if (pib1 > pib2){
        printf("O PIB da carta 1 venceu!\n");
    }
    else{
        printf("O PIB da carta 2 venceu!\n");
    }

    // Atributo pontos turísticos 
    if (numero_pontos_turisticos1 > numero_pontos_turisticos2){
        printf("Os pontos turísticos da carta 1 venceu!\n");
    }
    else{
        printf("Os pontos turísticos da carta 2 venceu!\n");
    }

    // Atributo densidade populacional 
    if (numero_pontos_turisticos1 > numero_pontos_turisticos2){
        printf("A densidade populacional da carta 1 venceu!\n");
    }
    else{
        printf("A densidade populacional da carta 2 venceu!\n");
    }
    
    // Atributo PIB per capta 
    if (pib_per_capita1 > pib_per_capita2){
        printf("O PIB per capta da carta 1 venceu!\n");
    }
    else{
        printf("O PIB per capta da carta 2 venceu!\n");
    }

    // Atributo super poder 
    if (superpoder1 > superpoder2){
        printf("O super poder da carta 1 venceu!\n");
    }
    else{
        printf("O super poder da carta 2 venceu!\n");
    }
       
    

    return 0; // Indica que o programa terminou corretamente
}