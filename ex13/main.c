#include <stdio.h>

void main (){
    float n = 0;
    
    printf("Escolha um numero: ");
    scanf("%f", &n);

    if(n < 100 || n > 200){
        printf("O numero escolhido nao esta entre 100 e 200 \n");
    }else if(n >= 100 && n <= 200){
        printf("O numero escolhido esta entre 100 e 200 \n");
    }else{
        printf("Deu ruim!");
    }
}