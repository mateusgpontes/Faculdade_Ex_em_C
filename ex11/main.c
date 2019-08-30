#include <stdio.h>

void main (){
    float n = 0;
 
    printf("Escolha um numero: ");
    scanf("%f", &n);

    if(n > 10){
        printf("O numero escolhido e maior que 10 \n");
    }else if(n < 10){
        printf("O numero escolhido e menor que 10 \n");
    }else if(n == 10){
        printf("O numero escolhido e igual a 10 \n");
    }else{
        printf("Deu ruim!");
    }

}