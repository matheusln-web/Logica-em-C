#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;

    printf("Jogo de Jokenpô\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &jogador);

    srand(time(0));
    computador = rand() % 3 + 1; // +1 pq o rand considera o 0 sendo o primeiro numero

    switch (jogador) {
        case 1:
            printf("Jogador: Pedra - ");
            break;
        case 2:
            printf("Jogador: Papel - ");
            break;
        case 3:
            printf("Jogador: Tesoura - ");
            break;
        default:
            printf("Opção invalida:");
            break;
    }

    switch (computador) {
        case 1:
            printf("Computador: Pedra = ");
            break;
        case 2:
            printf("Computador: Papel = ");
            break;
        case 3:
            printf("Computador: Tesoura = ");
            break;
    }

    if (jogador == computador) {
        printf("Empate!\n");
        // É mais facil declarar logo a verificação empate, depois verifica as vitorias ou derratos e por fim não precisa verificar
        // a outra condição, porque qualquer outra seria o inverso da condição que verifiquei após o empate.
    } else if ((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2)) {
        printf("Jogador venceu!\n");
    } else {
        printf("Computador venceu!\n");
    }

    return 0;
}
