#include <stdio.h>

int main(){

    int numero1, numero2, soma, subtracao, multiplicacao;
    float divisao;
    
    printf("Insira o 1° numero: ");
    scanf("%d", &numero1);
    printf("insira o 2° numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("A soma dos numeros é: %d\n", soma);
    printf("A subtração dos numeros é: %d\n", subtracao);
    printf("A multiplicação dos numeros é: %d\n", multiplicacao);
    printf("A divisão dos numeros é: %1.f\n", divisao);


    /*
    Soma (+)
    subtração (-)
    Multiplicação (*)
    Divisão (/)
    */
}