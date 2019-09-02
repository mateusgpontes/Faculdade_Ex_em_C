#include <stdio.h>

void main (){

    float n1 = 0;
    float n2 = 0;
    float n3 = 0;

    printf("Escolha 3 numeros\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    printf("A ordem inversa desses numeros e \n");

    printf("%.2f\n", n3);
    printf("%.2f\n", n2);
    printf("%.2f\n", n1);
}