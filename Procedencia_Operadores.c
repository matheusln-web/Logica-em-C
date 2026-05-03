#include <stdio.h>
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
int main() {
    int a = 5, b = -10, c = 1;
    // a > 0 = verdadeiro
    // b < 0 = verdadeiro
    // Verdadeiro && Verdadeiro = Verdadeiro
    // Verdadeiro || c == 0 = Verdadeiro
    //Verdadeiro || Falso = Verdadeiro
    //Lembrando que || significa "ou", && significa "e", e ! significa "não";
    if(a > 0 && b < 0 || c == 0){
        printf("A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");
    }
    return 0;
}