#include <stdio.h>

void media (char name[20]){
    float np1 = 1;
    float np2 = 1;
    float pim = 0;

    printf("Qual sua nota na np1? ");
    scanf("%f", &np1);    

    printf("Qual sua nota na np2? ");
    scanf("%f", &np2);
    
    printf("Qual sua nota no pim? ");
    scanf("%f", &pim);    

    int mediaFinal = (np1 * 4 + np2 * 4 + pim * 2) / 10;
    printf("%s sua media final foi %i\n",name , mediaFinal);
}

void main(){
    char nome[20] = "";
    printf("Qual seu nome? ");
    scanf("%s", nome);
    media(nome);     
}