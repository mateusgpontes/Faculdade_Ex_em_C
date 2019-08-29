#include <stdio.h>

void main (){
    float compi = 2 * 3.1415;
    float raio = 0;

    printf("Escolha o raio para calcular o valor do comprimento da circunferência\n");
    scanf("%f", &raio);
    float res = compi * raio;
    printf("O resultado foi %.2f\n", res);
}