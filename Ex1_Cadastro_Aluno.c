#include <stdio.h>

int main(){
    char nome[50];
    int idade, matricula;
    float altura;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite sua seu nome: ");
    scanf("%s", nome);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - Matricula: %d\n", nome, matricula);
    printf("Idade do aluno: %d - Altura: %.2f", idade, altura);

    return 0;

}
