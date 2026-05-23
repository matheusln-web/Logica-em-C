#include <stdio.h>

int main(){
/*
    for (int i = 1; i <= 5; i++){//primeiro faz a condição e o codigo, depois incrementa.
        printf("%d\n", i);
    }
*/
/*
    for (int i = 0; i <= 100; i+= 10){
        printf("%d\n", i);
    }
*/
    for (int i = 1; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}