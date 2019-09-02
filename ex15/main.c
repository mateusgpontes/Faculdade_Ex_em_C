#include <stdio.h>

void main (){

    float folhas = 0;
    float valor = 0.25;

    printf("Quantas folhas voce quer xerox? ");
    scanf("%f", &folhas);

    float res = folhas * valor;
    float resDesconto = folhas * (valor - 0.05);

    if(folhas < 100){    
        printf("Voce me deve %.2f\n", res);
    }else if(folhas >= 100){
        printf("Voce me deve %.2f\n", resDesconto);
    }else{
        printf("Deu ruim!");
    }
}