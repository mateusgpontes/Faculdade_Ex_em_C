#include <stdio.h>

void main (){
    float tabuada = 0;

    printf("Escolha um numero: ");
    scanf("%f", &tabuada);

    printf("A tabuada do %.2f ate o 10 e: \n", tabuada);

    for(int i = 0; i <= 10; i++){
        float res = i * tabuada;
        printf("%i * %.2f = %.2f\n", i, tabuada, res);
    }
}