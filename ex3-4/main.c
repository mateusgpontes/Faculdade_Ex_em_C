#include <stdio.h>

void main (){
    float n1 = 0;
    float n2 = 0;

    printf("Escolha um numero -->");
    scanf("%f", &n1);
    printf("Escolha outro numero -->");
    scanf("%f", &n2);

    float soma = n1 + n2;
    float subtracao = n1 - n2;
    float multiplicacao = n1 * n2;
    float divisao = n1 / n2;

    printf("A soma desses numeros e --> %f\n", soma);
    printf("A subtracao desses numeros e --> %f\n", subtracao);
    printf("A multiplicacao desses numeros e --> %f\n", multiplicacao);
    printf("A divisao desses numeros e --> %f\n", divisao);
}