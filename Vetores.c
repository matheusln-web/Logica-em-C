#include <stdio.h>

int main (){
/*
    float notas [3] = {85.5, 90.0, 78.3}; //Array/Vetores de notas

    printf("Nota do aluno 1 é: %.1f\n", notas[0]);
    printf("Nota do aluno 2 é: %.1f\n", notas[1]);
    printf("Nota do aluno 3 é: %.1f\n", notas[2]);
*/
/*
    char letras [4] = {'A', 'B', 'C', 'D'}; // Array de letras

    printf("Primeira letra: %c\n", letras[0]);
    printf("Segunda letra: %c\n", letras[1]);
    printf("Terceira letra: %c\n", letras[2]);
    printf("Quarta letra: %c\n", letras[3]);
*/
    char *nomes[] = {"Alice", "Bob", "Carol"};

    for(int i = 0; i < 3; i++){
        printf("%s \n", nomes[i]);
    }

    return 0;
}