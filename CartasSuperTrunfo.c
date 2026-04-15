#include <stdio.h>

int main() {
    // Função principal onde o programa começa

    char estado[20], codigo[10], cidade[50];
    int pt, carta;

    // Variáveis numéricas com casas decimais
    float pib, area, populacao;

    printf("**************************************\n");
    printf("********* DESAFIOS CARTAS ************\n");
    printf("**************************************\n");

    printf("Escreva o numero da carta:\n");
    scanf("%i", &carta);
    // %i lê inteiro | & pega o endereço da variável

    printf("Escreva o estado com uma letra(de A - H):\n");
    scanf("%s", estado);

    printf("Escreva o codigo da carta(de 01 - 04):\n");
    scanf("%s", codigo);

    printf("Escreva o nome da cidade:\n");
    scanf(" %[^\n]", cidade); // Lê texto com espaço (ex: Porto Alegre)

    printf("População (use ponto, ex: 10000.50):\n");
    scanf("%f", &populacao); // %f lê número decimal (float)

    printf("Área (use ponto, ex: 15000.50):\n");
    scanf("%f", &area);

    printf("PIB (use ponto, ex: 20000.75):\n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos:\n");
    scanf("%i", &pt);

    printf("\n======== RESULTADO ==========\n");
    printf("Carta: %i \n", carta);
    printf("Estado: %s \n", estado);
    printf("Código: %s%s\n", estado, codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %.2f \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f R$\n", pib);
    printf("Número de pontos turísticos: %i \n", pt);
    printf("==============================\n");

    return 0; / Indica que o programa terminou corretamente
}