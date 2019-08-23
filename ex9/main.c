#include <stdio.h>

void main () {
    float dolar = 0;
    printf("Quantos dolares voce tem? ");
    scanf("%f", &dolar);

    float reais = 4.12 / dolar;
    printf("Voce tem %fR$ em reais\n", reais);
}