#include <stdio.h>

void main (){

    float velocidade = 0;
    float vGravity = 9.8;
    float distancia = 0;
    float tempo = 0;

    printf("Em quantos segundos voce quer chegar ao chao? ");
    scanf("%f", &tempo);

    velocidade = vGravity * tempo;
    distancia = vGravity * (tempo * tempo) / 2;

    printf("Para chegar em %.2fs com relacao a gravidade voce tem que esta em uma velocidade de %.2fm/s e voce percorrera %.2fm \n", tempo, velocidade, distancia);
}