#include <stdio.h>

int main(){
    /*int opcao;
    float saldo = 1000.00;

    printf("Escolha uma opção: \n");
    printf("1 - Verificar saldo\n");
    printf("2 - Realizar depósito\n");
    printf("3 - Realizar saque\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("Seu saldo é de R$ %.2f\n", saldo);
            break;
        case 2:
            printf("Digite o banco para depósito: \n");
            printf("Digite a agencia: \n");
            printf("Digite a conta para deposito: \n");
            break;   
        case 3:
            printf("Digite o valor do saque: \n");
            break; 
        default:
            printf("Opção inválida\n");    
    }*/
    /*int dia;
    printf("Digite um numero de 1 a 7 para o dia da semana: ");
    scanf("%d", &dia);

    if(dia == 1){
        printf("Hoje é domingo\n");
    }
    else if(dia == 2){
        printf("Hoje é segunda-feira\n");
    }
    else if(dia == 3){
        printf("Hoje é terça-feira\n");
    }
    else if(dia == 4){
        printf("Hoje é quarta-feira\n");
    }
    else if(dia == 5){
        printf("Hoje é quinta-feira\n");
    }
    else if(dia == 6){
        printf("Hoje é sexta-feira\n");
    }
    else if(dia == 7){
        printf("Hoje é sábado\n");
    }
    else{
        printf("Número inválido. Digite um número de 1 a 7.\n");
    }
    */
    int dia;
    
    printf("Digite um numero de 1 a 7 para o dia da semana: ");
    scanf("%d", &dia);

    switch (dia){
        case 1:
            printf("Hoje é domingo\n");
            break;
        case 2:
            printf("Hoje é segunda-feira\n");
            break;
        case 3:
            printf("Hoje é terça-feira\n");
            break;
        case 4:
            printf("Hoje é quarta-feira\n");
            break;
        case 5:
            printf("Hoje é quinta-feira\n");
            break;
        case 6:
            printf("Hoje é sexta-feira\n");
            break;
        case 7:
            printf("Hoje é sábado\n");
            break;
        default:
            printf("Número inválido. Digite um número de 1 a 7.\n");
    }
    return 0;
} 