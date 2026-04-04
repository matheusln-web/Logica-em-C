#include <stdio.h>

int main(){

    int idade;
    float altura;
    char opcao;
    char nome[20];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    // quanto é de caracteristica string, não precisa usar o &
    printf("O nome é: %s\n", nome);
    /*
    O espaço é considerado uma finalização, se eu colocar um nome com sobrenome, ele vai me retornar
    somente o primeiro nome, antes do espaço
    */
    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    // o enter tambem é considerado um caracter, então, para o scanf não ler, colocamos um espaço antes do formato.
    printf("A opção é: %c\n", opcao);

}
