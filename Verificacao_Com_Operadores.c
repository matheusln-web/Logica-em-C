#include <stdio.h>
int main(){
    int idade = 16;
    float altura = 1.75;

    if(idade >= 18 && idade < 30 && altura >= 1.70){
        printf("Você atende aos critérios de idade e altura.\n");
    } else {
        printf("Você não atende aos critérios de idade e altura.\n");
    }
return 0;
}