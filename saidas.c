#include <stdio.h>

int main(){

    int idade = 26;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "matheus";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);   


    /*
    %d Imprime um inteiro no formato decimal.
    %i Equivale a $d.
    %f Imprime um numero de ponto flutuante no formato padrão
    %e Imprime um numero de ponto flutuante na notação cientifica.
    %c Imprime um unico caractere
    %s Imprime uma cadeia (String) de caracteres.
    */
}
