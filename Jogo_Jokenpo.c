#include <stdio.h>   // Biblioteca de entrada e saída (printf, scanf)
#include <stdlib.h>  // Biblioteca para rand() e srand()
#include <time.h>    // Biblioteca para usar o tempo como semente aleatória

int main() {

    int jogador, cpu;           // Variáveis para armazenar escolha do jogador e do computador
    int jogar_novamente;        // Controle do loop (se o usuário quer continuar)
    int totjog, totemp, totcpu = 0; // variaver para o score do JOGO

    // Vetor de strings com as opções do jogo
    // Índices: 0 = Pedra | 1 = Papel | 2 = Tesoura
    char *opcoes[] = {"Pedra", "Papel", "Tesoura"};

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    // Início do loop (executa pelo menos uma vez)
    do {

        // Menu do jogo
        printf("\n--------------------- Jokenpo -----------------------\n");
        printf("\n**Total Jogador=[%d] ** Empate [%d] ** Total Computador [%d] ***" );
        scanf("%d%d%d", &totjog, &totemp, &totcpu);
        printf("\n-----------------------------------------------------\n");        
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("Opcao: ==> ");
        scanf("%d", &jogador); // Lê a opção do jogador

        // Validação da entrada (só aceita 1, 2 ou 3)
        if (jogador < 1 || jogador > 3) {
            printf("Opcao invalida!\n");
            continue; // Volta para o início do loop sem executar o resto
        }

        // Gera número aleatório entre 1 e 3 para o computador
        cpu = rand() % 3 + 1;

        // Exibe as escolhas
        // -1 porque o vetor começa no índice 0
        printf("Voce escolheu: %s\n", opcoes[jogador - 1]);
        printf("Computador escolheu: %s\n", opcoes[cpu - 1]);

        // Lógica do jogo
        if (jogador == cpu) {
            printf("Empate!\n");
        } 
        // Condições de vitória do jogador
        else if ((jogador == 1 && cpu == 3) || // Pedra vence Tesoura
                 (jogador == 2 && cpu == 1) || // Papel vence Pedra
                 (jogador == 3 && cpu == 2)) { // Tesoura vence Papel
            printf("Voce venceu!\n");
        } 
        // Caso contrário, o computador vence
        else {
            printf("Computador venceu!\n");
        }

        // Pergunta se o usuário deseja jogar novamente
        printf("\nDeseja jogar novamente? (1=Sim / 0=Nao): ");
        scanf("%d", &jogar_novamente);

    } while (jogar_novamente == 1); // Repete enquanto for 1

    // Mensagem final
    printf("\n=======>>>> Fim do jogo!!!!!!\n");

    return 0; // Indica que o programa terminou corretamente
}