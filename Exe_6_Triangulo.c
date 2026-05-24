#include <stdio.h>

int main(){

    int i, j;

    char letra;

    for (i = 1; i <= 5; i++){

        letra = 'A';

        for(j = 1; j <=  i; j++){ // essa estrutura so vai aumentar de acordo com a externa
            
            printf("%c ", letra);
            ++letra;// isso muda o valor da letra e mostra a proxima
        }
        printf("\n");
    }

    return 0;
}