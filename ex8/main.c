#include <stdio.h>

void main (){
    float c = 0;
    printf("Coloque o graus Celsius da da sua cidade: ");
    scanf("%f", &c);

    int f = (9 * c + 160) / 5;
    printf("O graus em Fahrenheit é %i\n", f);
}