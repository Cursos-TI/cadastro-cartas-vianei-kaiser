#include <stdio.h>   // Biblioteca de entrada e saída (printf, scanf)
#include <stdlib.h>  // Biblioteca para rand() e srand()
#include <time.h>    // Biblioteca para usar o tempo como semente aleatória

int main() {

    int jogador, cpu;           // Variáveis para armazenar escolha do jogador e do computador
    int totjog = 0, totemp = 0, totcpu = 0; // variaver para o score do JOGO

    // Vetor de strings com as opções do jogo
    // Índices: 0 = Pedra | 1 = Papel | 2 = Tesoura
    char *opcoes[] = {"Pedra", "Papel", "Tesoura"};

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    // LOOP CONTÍNUO (volta automaticamente ao menu)
    while (1) {

        // PLACAR
        printf("\n--------------------- Jokenpo -----------------------\n");

        // PLACAR COM 3 DÍGITOS
        printf("Jogador: [%03d] | Empate: [%03d] | CPU: [%03d]\n", 
                totjog, totemp, totcpu);

        printf("-----------------------------------------------------\n");

        // Menu do jogo
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("0 - Sair\n"); // opção para encerrar o jogo
        printf("Opcao: ==> ");

        // Lê a opção do jogador com validação
        if (scanf("%d", &jogador) != 1) {
            printf("Entrada invalida!\n");
            while (getchar() != '\n'); // limpa buffer
            continue; // volta ao menu
        }

        // Se escolher 0, encerra o jogo
        if (jogador == 0) {
            break;
        }

        // Validação da entrada (só aceita 1, 2 ou 3)
        if (jogador < 1 || jogador > 3) {
            printf("Opcao invalida!\n");
            continue; // volta para o início do loop
        }

        // Gera número aleatório entre 1 e 3 para o computador
        cpu = rand() % 3 + 1;

        // Exibe as escolhas
        // -1 porque o vetor começa no índice 0
        printf("Voce escolheu: %s\n", opcoes[jogador - 1]);
        printf("Computador escolheu: %s\n", opcoes[cpu - 1]);

        // Lógica do jogo
        if (jogador == cpu) {
            printf("\033[33mEmpate!\033[0m\n"); // amarelo
            totemp++; // incrementa empate
        } 
        // Condições de vitória do jogador
        else if ((jogador == 1 && cpu == 3) || // Pedra vence Tesoura
                 (jogador == 2 && cpu == 1) || // Papel vence Pedra
                 (jogador == 3 && cpu == 2)) { // Tesoura vence Papel
            printf("\033[32m*** Voce venceu!!!!! ***\033[0m\n"); // verde
            printf("\a\a"); // DAR UM BEEP (pode não funcionar em todos os terminais)
            totjog++; // incrementa vitória do jogador
        } 
        // Caso contrário, o computador vence
        else {
            printf("\033[31m*** Computador venceu! ***\033[0m\n"); // vermelho
            printf("\a\a"); // DAR UM BEEP (pode não funcionar em todos os terminais)
            totcpu++; // incrementa vitória do computador
        }
    }

    // Mensagem final
    printf("\n=======>>>> Fim do jogo!!!!!!\n");

    return 0; // Indica que o programa terminou corretamente
}