#include <stdio.h>

//int: vai até -2,147,483,648 a 2,147,483,648
//unsigned int: dobra esse valor mas sem os negativos, 0 a 4,294,967,295
//short = 2B - int = 4B - Long int = 8B
int main() {

    int numeroSinal = 3000000000; //valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;
    int numeroNormal = 2147483647; //valor maximo de int
    long int numeroGrande = 2147483648; //Valor passa do numero maximo de int
    double numeroPreciso; 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;

    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal);
    printf("Numero regular: %d\n", numeroNormal);
    printf("Numero grande (long) %ld\n", numeroGrande);
    printf("Numero preciso (double): %.15f\n", numeroPreciso);
    printf("NUmero muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);

    short int numeroPequeno = 32767; //Valor maximo de short int
    printf("Numero pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; //Valor maior que short int
    printf("Numero pequeno atualizado (short int): %d\n", numeroPequeno);

    return 0;

}



