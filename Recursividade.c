#include <stdio.h>

void recursiveLoop(int n){//Função recursiva para immiprir números de n até 1
    if (n > 0){
        printf("%d\n", n);// imprime o valor atual de n
        recursiveLoop(--n);// chama a si mesma com n - 1, posso usar --n tambem, fica ate melhor
    }
}

int main(){
    int numero = 5;
    printf("Contagem regressiva\n");
    recursiveLoop(numero);

}