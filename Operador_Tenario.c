#include <stdio.h>

int main() {
    /*
    int idade = 16;
    int resultado;

    resultado = idade >= 18 ? 1 : 0;
    if(resultado == 1){
        printf("Você é maior de idade\n");
    } else {
        printf("Você é menor de idade\n");
    }
    */
    /*
    int temperatura = 28;
    int resultado;

    resultado = temperatura > 30 ? 1 : 0;
    if(resultado == 1){
        printf("Está calor!\n");
    } else { 
        printf("Está frio!\n");
    }
    return 0;
    */
    int valor1, valor2, maior;

    printf("Insira o primeiro valor:");
    scanf("%d", &valor1);
    printf("Insira o segundo valor:");
    scanf("%d", &valor2);
    
    maior = valor1 > valor2 ? 1 : 0;

    if(maior){
        printf("%d é maior que %d\n", valor1, valor2);
    } else {
        printf("%d é maior que %d\n", valor2, valor1);
    }
    return 0;
}