#include <stdio.h>

int main(){
/*
    int i = 0;
    
        while (i <= 10){
            if(i % 2 == 0){
                printf("%d\n", i);       
            }
            i++;
        }
*/
/*
    int numero;
    
    do {

        printf("Digite um numero par para encerrar! ");
        scanf("%d", &numero);

        if (numero % 2 == 0){
            printf("%d é par\n", numero);
        } else {
            printf("%d é impar\n", numero);
        }
    } while (numero % 2 != 0);
    
    printf("Você digitou um numero par, encerrando programa...\n");
*/
    int numero, i;

    printf("Digite um numero para visualizar a tabuada:");
    scanf("%d", &numero);

    for(i = 0; i <= 10; i++){
       
        printf("%d X %d = %d\n", i, numero, i * numero );
    }
    return 0;
}