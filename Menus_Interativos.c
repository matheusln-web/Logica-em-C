#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main (){

    int opcao, numerosecreto, palpite;
    
    printf("Menu principal:\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            srand(time(0));
            numerosecreto = rand() % 10;
            printf("Numero secreto gerado! Tente adivinhar.\n");
            printf("Digite seu palpite de 0 a 9: ");
            scanf("%d", &palpite);
            if (numerosecreto == palpite){
                printf("Parabéns! Você acertou!\n");
            } else {
                printf("Que pena! Você errou.\n");
                printf("O número secreto era: %d\n", numerosecreto);
            }
            break;
        case 2:
            printf("Regras do jogo:\n");
            printf("1. O computador irá gerar um número secreto entre 0 e 9.\n");
            printf("2. O jogador deve tentar adivinhar o número secreto.\n");
            printf("3. O jogador tem apenas uma chance para adivinhar o número.\n   ");
            break;
        case 3:
            printf("Saindo do jogo...\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
    return 0;
}