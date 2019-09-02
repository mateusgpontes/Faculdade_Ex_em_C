#include <stdio.h>

void main () {
    int idade = 0;
    
    printf("Qual a sua idade? ");
    scanf("%i", &idade);

    if(idade <= 13){
        printf("Sua classificacao e infantil\n");
    }else if(idade > 13 && idade <= 17){
        printf("Sua classifcacao e juvenil\n");
    }else if(idade > 17){
        printf("Sua classificacao e senior\n");
    }else{
        printf("Deu ruim\n");
    }
}