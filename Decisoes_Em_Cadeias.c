#include <stdio.h>

int main() {
    /*int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade > 60) {
        printf("idoso\n");
    } else if (idade >= 18 && idade < 60) {
        printf("Adulto\n");
    } else if (idade >= 12 && idade < 18) {
        printf("Adolescente\n");
    } else {
        printf("Criança\n");
    }*/
    int nota;
    
    printf("Digite sua nota: ");
    scanf("%d", &nota);

    if(nota < 50){
        printf("F\n");
    } else if(nota < 60){
        printf("E\n");
    } else if(nota < 70){
        printf("D\n");
    } else if(nota <80){
        printf("C\n");
    } else if(nota < 90){
        printf("B\n");
    } else {
        printf("A\n");
    }
    return 0;
}
