#include <stdio.h>

int main(){

    int numero1, numero2, resultado;
//Lê os numeros inseridos pelo usuario
    printf("Insira o 1° numero: ");
    scanf("%d", &numero1);
    printf("Insira o 2° numero: ");
    scanf("%d", &numero2);
//primeiro soma os numeros e depois faz as determinadas operações com ele mesmo;
    resultado = numero1 + numero2;
    printf("%d\n", resultado);
    resultado -= 2;
    printf("%d\n", resultado);
    resultado *= 3;
    printf("%d\n", resultado);
    resultado /= 2;
    printf("%d\n", resultado);
//Observe que ele vai atualizando o valor e seguindo com as operações;
    return 0;

/*
Atribuição simples (=)
Atribuição com soma (+=)
Atribuição com subtração (-=)
Atribuição com multiplicação (*=)
Atribuição com divisão (/=)
*/

}
