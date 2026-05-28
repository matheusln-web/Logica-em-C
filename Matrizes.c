#include <stdio.h>

int main(){
/*
    int vetor[5];

    for (int i = 0; i < 5; i++){//Iniciar o vetor usando for
        vetor[i] = i * 2;//atribui valores ao vetor, nesse caso ele vai receber os multiplos de 2
    }

    for (int i = 0; i < 5; i++){
        printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
*/
/*
    int matriz[3][3];
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){//percorre todo esse loop antes de voltar pro anterir
            matriz[i][j] = i + j;//atribui os valores na matriz
            printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
*/
/*
    int vetor[5] = {1, 2, 3, 4, 5};
    int soma = 0;//variavel pra armazerar o valor de cada soma

    for (int i = 0; i < 5; i++){//Loop que passara por todos os itens do vetor
        soma += vetor[i];//soma de cada item do vetor: soma = 0 vai ser 1, depois soma recebe ele mesmo + o proximo item que seria 2
    }
    printf("A soma dos elementos do vetor é: %d\n", soma);
*/
    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int matrizSoma[2][2];  

    for (int i = 0; i < 2; i++ ){
        for (int j = 0; j < 2; j++){
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("matrizSoma[%d][%d] = %d\n", i, j, matrizSoma[i][j]);
        }
    }

    return 0;
}