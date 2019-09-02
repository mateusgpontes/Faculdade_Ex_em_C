#include <stdio.h>

void main (){

    int number = 0;
    
    printf("Escolha um numero inteiro: ");
    scanf("%i", &number);

    if(number % 2 == 0){
        printf("O numero %i e par :D\n", number);
    }else{
        printf("O numero %i e impar :D\n", number);
    }
}