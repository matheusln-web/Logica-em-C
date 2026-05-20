#include <stdio.h>

int main(){

    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento de Estudantes\n");
    printf("1. Calcular Média\n");
    printf("2. Determinar Status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular Média\n");
        printf("Insira a 1° nota:");
        scanf("%f", &nota1);
        printf("Insira a 2° nota:");
        scanf("%f", &nota2);
        
        if( (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            media = (nota1 + nota2) / 2;
            printf("A média é %.1f\n", media);
        } else {
            printf("Entrada com valores invalidos");
        }
        break;
    case 2:
        printf("Determinar status\n");
        printf("Insira a média:");
        scanf("%f", &media);
        media >= 5 ? printf("Aprovado\n") : printf("Reprovado\n");
        break;
    case 3: 
        printf("Encerrando programa...");
        break;
    default:
        break;
    }
    return 0;
}