#include <stdio.h>

void main (){
    int n1 = 0;
    int n2 = 0;

    printf("Escolha um numero inteiro: ");
    scanf("%i", &n1);
    printf("Escolha outro numero inteiro: ");
    scanf("%i", &n2);
    
    if(n1 > n2){
        printf("O primeiro numero escolhido(%i) e maior que o segundo numero escolhido(%i)\n", n1, n2);
    }else if(n1 < n2){
        printf("O segundo numero escolhido(%i) e maior que o primeiro numero escolhido(%i)\n", n2, n1);
    }else if(n1 = n2){
        printf("Os numeros escolhidos sao iguais (%i = %i)\n", n1, n2);
    }else{
        printf("Deu ruim!");
    }
}