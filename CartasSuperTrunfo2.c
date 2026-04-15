#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
// Area para entrada de dados
// Área para exibição dos dados da cidade


char estado[20], codigo[10], cidade[20];//o valor entre chaves especificaa quantidade máxima  de caracteres da variável
int pt, carta;
float pib, area, populacao;

printf("**************************************\n");
printf("********* DESAFIOS CARTAS ************\n");
printf("**************************************\n");

printf("Escreva o numero da carta:\n");
scanf("%i", &carta); //sintaxe "i" serve valores inteiros

printf("Escreva o estado com uma letra(de A - H):\n");
scanf("%s", estado);  //sintaxe "%s" serve string

printf("Escreva o codigo da carta(de 01 - 04):\n");
scanf("%s", codigo); 

printf("Escreva o nome da cidade:\n");
scanf("%s", cidade); //sintaxe "s" serve para especificar strings com mais letras

printf("Escreva a população em milhares(ex:10.000):\n");
scanf("%f", &populacao); //sintaxe "%f FLOAT para numeros quebrados

printf("Escreva a area em milhares(ex:10.000):\n");
scanf("%f", &area);

printf("Escreva o PIB em milhares(ex:10.000):\n");
scanf("%f", &pib); //variáveis tipo float, necessitam do operador &

printf("Escreva o N de pontos turisticos:\n");
scanf("%i", &pt); //variáveis tipo int, necessitam do operador &

//*************************************************
printf("========RESULTADO============\n");
printf("Carta: %i \n", carta); 
printf("Estado: %s \n", estado);
printf("Código: %s",estado, "%s\n\n", codigo); //concatenando sem usar funções, aqui não foi feita a quebra de linha para juntar as 
pintf("Nome da Cidade: %s \n", cidade);
printf("População: %.2f \n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f R$\n ", pib);//pib não é uma variável tipo INT - *** não precisa do & ****
printf("Número de pontos turísticos: %i \n", pt);
printf("************** FIM ************************\n");
printf(" -- ");