#include <stdio.h>

void main () {
    float dolar = 0;
    printf("Quantos dolares voce tem? ");
    scanf("%f", &dolar);

    float reais = dolar * 4.12;
    printf("Voce tem %.2fR$ em reais\n", reais);
}