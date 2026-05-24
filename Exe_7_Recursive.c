#include <stdio.h>

void recursiveLoop(int n){
    if (n > 0){
        recursiveLoop(--n);// alterando a ordem faz com que imprima crescente
        printf("%d\n", n);
    }//como o recursivo armazena em pilha, primeiro ele faz todo o calculo, depois mostra o resultado
    // o ultimo numero a ser calculado foi o 1, depois 2, 3 ..., assim ele mostra em ordem crescente
}

int main(){
    int numero = 5;
    printf("Contagem regressiva\n");
    recursiveLoop(numero);

}