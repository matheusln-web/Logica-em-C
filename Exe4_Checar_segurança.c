#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque;
    
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite a umidade: ");
    scanf("%f", &umidade);
    printf("Digite o estoque: ");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("Temperatura alta\n");
    } else {
        printf("Temperatura normal\n");
    }
    
    if(umidade > 50){
        printf("Umidade alta\n");
    } else {
        printf("Umidade normal\n");
    }

    if(estoque < 100){
        printf("Estoque baixo\n");
    } else {
        printf("Estoque normal\n");
    }
}