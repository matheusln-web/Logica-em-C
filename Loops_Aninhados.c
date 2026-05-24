#include <stdio.h>

int main() {
/*
    int i = 1;

    while (i <= 10){ // Loop externo
        int j = 1; // variavel local, poderia ter criado fora, mas é um exemplo
        while (j <= 10){
            printf("%d\t", i * j); // loop interno
            j++; // incremento loop interno
        }
        printf("\n");
        i++;
    }
*/
/*
    int i = 1;

    do {
        int j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 10);
*/    
    for (int i; i <= 10; i++){

        for (int j; j <= 10; j++){
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    return 0;
}