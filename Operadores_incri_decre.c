#include <stdio.h>

int main(){

    int numero1 = 1, resultado;

    printf("Antes do incremento: %d\n", numero1);
    
    resultado = numero1++; 
    //numero1++ Incrementa (aumenta) em 1 unidade de valor;
    //numero1 += 1 -> Exemplo de como seria com operador de atribuição;
    printf("Após o pos-incremento: %d, Resultado: %d\n", numero1, resultado);
    //Resultado -> 1 porque é o valor atribuido, só depois numero1 foi incrementado;

    resultado = ++numero1;
    printf("Após Pré-incremento: %d, Resultado: %d\n", numero1, resultado);
    //Resultado -> 3 porque 1° incrementou numero1 e só depois resultado recebeu o valor;

    //Mesma coisa vale para o decremento --

   resultado = numero1--; 
    //numero1++ Incrementa (aumenta) em 1 unidade de valor;
    //numero1 += 1 -> Exemplo de como seria com operador de atribuição;
    printf("Após o Pós-decremento: %d, Resultado: %d\n", numero1, resultado);
    //Resultado -> 3 porque é o valor atribuido, só depois numero1 foi decrementado;

    resultado = --numero1;
    printf("Após Pré-decremento: %d, Resultado: %d\n", numero1, resultado);
    //Resultado -> 1 porque 1° decrementou numero1 e só depois resultado recebeu o valor;

}