#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;
    char tipoComparacao;

    srand(time(0));
    computador = rand() % 100 + 1;//essa função randomiza um numero entre 1 e 100
    
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você pode escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &tipoComparacao);

    printf("Digite um número entre 1 e 100: ");
    scanf("%d", &jogador);

    switch (tipoComparacao)
    {
    case 'M':
    case 'm':// por nao ter break, indepentende se eu digitar maiusculo ou minusculo, o codigo vai rodar o condição correta.(gambiarra)
        if (jogador > computador){
            printf("Seu número: %d\n", jogador);
            printf("Número computador: %d\n", computador);
            printf("Parabéns, você venceu :D\n");
        } else {
            printf("Seu número: %d\n", jogador);
            printf("Número computador: %d\n", computador);
            printf("Que pena!, você perdeu :(\n");
        }
        break;
    case 'N':
    case 'n':
        if (computador > jogador){
            printf("Seu número: %d\n", jogador);
            printf("Número computador: %d\n", computador);
            printf("Parabéns, você venceu :D\n");
        } else {
            printf("Seu número: %d\n", jogador);
            printf("Número computador: %d\n", computador);
            printf("Que pena!, você perdeu :(\n");
        }
        break;
    case 'I':
    case 'i':
        if (jogador == computador){
            printf("Seu número: %d\n", jogador);
            printf("Número computador: %d\n", computador);
            printf("Parabéns, você venceu :D\n");
        } else {
            printf("Seu número: %d\n", jogador);
            printf("Número computador: %d\n", computador);
            printf("Que pena!, você perdeu :(\n");
        }
        break;
    default:
        printf("Opção de jogo invalida.");
        break;
    }
    return 0;
}