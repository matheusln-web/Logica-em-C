#include <stdio.h>

#define LINHA 5
#define COLUNA 5

int main(){

    int matriz[LINHA][COLUNA];              
    int target = 15;
    int found = 0;
    int soma = 1;

    for (int i = 0; i < LINHA; i++){//aqui eu estou gerando a matriz sem precisar inserir 1 por 1
        for (int j = 0; j < COLUNA; j++){
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);// logo em seguida em mostro ela
        }
        printf("\n");
    }

    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++){
            if (matriz[i][j] == target){//Faz a procura do elemento de target
                printf("O Valor %d encontrado no indice (%d, %d)\n", target, i, j);//Exibe o elemento e onde ele foi encontrado
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