#include <stdio.h>

int main(){
    
   /* int idade;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda: ");
    scanf("%f", &renda);

    if(idade <= 18 || idade >= 60){
        if(renda < 2000){
            printf("Voce tem direito ao desconto\n");
        } else {
            printf("Voce nao tem direito ao desconto devido a renda\n");
        }
    } else {
        printf("Rejeitado em relação a idade\n");
    }*/
    /*int idade, dependentes;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    printf("Digite sua renda: ");
    scanf("%f", &renda);

    if (idade >= 18 && idade < 65){
        if (renda < 3000){
            if (dependentes > 2){
                printf("Voce tem direito ao beneficio\n");
            } else {
                printf("Rejeitado em relação ao numero de dependentes\n");
            }
        } else {
            printf("Rejeitado em relação a renda\n");       }
    } else {
        printf("Rejeitado em relação a idade\n");
    }*/
   int numero;
   
   printf("Digite um numero: ");
   scanf("%d", &numero);

   if(numero > 0){
        if(numero % 2 == 0) {
            printf("Numero positivo e par\n");
        } else {
            printf("Numero positivo e impar\n");
        }          
   } else if(numero == 0 ) {
        printf("Numero é zero\n");
        } else {
            printf("Numero negativo\n");
   }
    return 0;
}