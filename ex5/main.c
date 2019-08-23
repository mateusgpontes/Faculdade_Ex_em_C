#include <stdio.h>

void main (){
    float km = 0;
    float litros = 0;

    printf("Coloque em km o quanto seu veiculo andou --> ");
    scanf("%f", &km);
    printf("Coloque quantos litros de combustivel seu veiculo gastou na viajem --> ");
    scanf("%f", &litros);

    float media = km / litros;
    printf("Seu veiculo consome em media %f litros por km\n", media);
}