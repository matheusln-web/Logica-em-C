#include <stdio.h>     

int main(){

    int a = -10, b = 5, c = -10;
    //&& é usado para comparar 2 condições positivas;
    if(a > 0 && b > 0)
    {
        printf("Os dois números são positivos\n");
    } else {
        //Se uma delas for negativa, retorna essa mensagem;
        printf("Pelo menos um dos números é negativo\n");
    }
    //|| é usado para comparar 2 condições, onde apenas uma precisa ser positiva;
    if(a > 0 || b > 0)
    {
        printf("Pelo menos um dos números é positivo\n");
    } else {
        //Se ambas forem negativas, retorna essa mensagem;
        printf("Os dois números são negativos\n");
    }
    //! é usado para inverter o valor de uma condição;
    if(!c) {
        //Aqui ele inverte o valor da condição, se c for 0, !c será 1, fazendo com que a condição seja verdadeira;
        printf("A variavel é 0\n");
    } else {
        //Se c for diferente de 0, !c será 0, fazendo com que a condição seja falsa;
        printf("A variavel é diferente de 0\n");
    }
    if(!(c > 0)) {
        //Aqui ele inverte o valor da condição, se c for maior que 0, !(c > 0) será falso, fazendo com que a condição seja falsa;
        printf("A variavel é negativa\n");
    } else {
        //Se c for menor ou igual a 0, !(c > 0) será verdadeiro, fazendo com que a condição seja verdadeira;
        printf("A variavel é positiva\n");
    }
return 0;
}
/*Precedência dos operadores lógicos
() []
! - ++ -- aqui é da direita pra esquerda
+ -
< <= > >=
== !=
&&
||
= += -= *= /= %= aqui é da direita pra esquerda
,
é uma hierarquia, que começa da esquerda para a direita;*/
