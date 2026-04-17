#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, cpu;

    // Inicializa o gerador de números aleatórios com base no tempo
    srand(time(NULL));

    printf("--- Jokenpo ---\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Opcao: [");
    scanf("%d]", &jogador);

    // Validação da entrada
    if (jogador < 0 || jogador > 2) {
        printf("Opcao invalida!\n");
        return 1;
    }

    // Computador escolhe entre 0, 1 ou 2
    //cpu = rand() % 3; //esta divisão so serve se usar 0 1 2
    
    cpu = rand() % 3 + 1; //o RESULTADO 0 1 2 = ENTAO +1 = 1 2 3 

    // Exibir escolhas
    char *opcoes[] = {"Pedra", "Papel", "Tesoura"};
    printf("Voce escolheu: %s\n", opcoes[jogador]);
    printf("Computador escolheu: %s\n", opcoes[cpu]);

    // Lógica do jogo
    if (jogador == cpu) {
        printf("Empate!\n");
    } 
    else if ((jogador == 0 && cpu == 2) || // Pedra ganha de Tesoura
             (jogador == 1 && cpu == 0) || // Papel ganha de Pedra
             (jogador == 2 && cpu == 1)) { // Tesoura ganha de Papel
        printf("Voce venceu!\n");
    } 
    else {
        printf("Computador venceu!\n");
    }

    return 0;
}
