#include <stdio.h>

int main() {
    char Produto_A[30] = "Produto A";
    char Produto_B[30] = "Produto B";

    unsigned int Estoque_A = 1000;
    unsigned int Estoque_B = 2000;

    float Valor_A = 10.50;
    float Valor_B = 20.40;

    unsigned int Estoque_Minimo_A = 500;
    unsigned int Estoque_Minino_B = 2500;

    double Valor_Total_A;
    double Valor_Total_B;

    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", Produto_A, Estoque_A, Valor_A);
    printf("Produto %s tem estoque %u e o valor unitario é R$ %.2f\n", Produto_B, Estoque_B, Valor_B);

    int Resultado_A, Resultado_B;
    Resultado_A = Estoque_A > Estoque_Minimo_A;
    Resultado_B = Estoque_B > Estoque_Minino_B;

    printf("O produto %s tem estoque minimo %d\n", Produto_A, Resultado_A);
    printf("O produto %s tem estoque minimo %d\n", Produto_B, Resultado_B);

    printf("Valor total de A é maior que o valor total de B? %d\n", (Estoque_A * Valor_A) > (Estoque_B * Valor_B));


}