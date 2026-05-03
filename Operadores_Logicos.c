#include <stdio.h>     

int main(){

    int a = 10, b = 5;
    //&& é usado para comparar 2 condições positivas;
    if(a > 0 && b > 0)
    {
        printf("Os dois números são positivos\n");
    } else {
        //Se uma delas for negativa, retorna essa mensagem;
        printf("Pelo menos um dos números é negativo\n");
    }
return 0;
}
