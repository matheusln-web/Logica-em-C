#include <stdio.h>

int main (){

    float nota1, nota2, nota3, media, total;

    printf("====== Cálculadora de Média ======\n");
    printf("\n");
    //Leitura das notas do aluno;
    printf("Insira a 1° nota: ");
    scanf("%f", &nota1);
    printf("Insira a 2° nota: ");
    scanf("%f", &nota2);
    printf("Insira a 3° nota: ");
    scanf("%f", &nota3);

    total = nota1 + nota2 + nota3; //calculo total de todas as notas;
    media = total / 3; //calculo da média;

    printf("A média do aluno é de: %.1f\n", media);

    return 0;
}
