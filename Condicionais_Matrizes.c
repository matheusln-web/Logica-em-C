#include <stdio.h>

int main(){
/*
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++){//percorre a matriz
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] > 5){//Se o item da matriz for maior que 5
                matriz[i][j] = -matriz[i][j];//Faz o item se tornar negativo
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
*/
/*
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] % 2 == 0){
                evenCount++;//imcrementa para numeros pares
            } else {
                oddCount++;//imcrementa para numeros impares
            }
        }
    }
    printf("Números de elementos pares: %d\n", evenCount);
    printf("Números de elementos impares: %d\n", oddCount);
*/
/*
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] % 3 == 0){
                matriz[i][j] = -1;
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
*/
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 5;
    int found = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] == target){//Faz a procura do elemento de target
                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);//Exibe o elemento e onde ele foi encontrado
                found = 1;
                break;//aqui quebra o loop, pq nao precisa procurar mais
            }
        }
        if (found) break;//Se found for true, para o programa
    } 
    if (!found){//exibe que o elemento n foi encontrado
        printf("Elemento %d não encontrado na matriz\n", target);
    }                  
    return 0;
}