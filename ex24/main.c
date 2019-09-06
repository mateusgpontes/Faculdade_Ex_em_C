#include <stdio.h>

int menor (float n1, float n2, float n3, float n4, float n5){
    int menor = 0;

    if(n1 <= n2 && n1 <= n3 && n1 <= n4 && n1 <= n5){
        menor = n1;
    }else if(n2 <= n1 && n2 <= n3 && n2 <= n4 && n2 <= n5){
        menor = n2;
    }else if(n3 <= n1 && n3 <= n2 && n3 <= n4 && n3 <= n5){
        menor = n3;
    }else if(n4 <= n1 && n4 <= n2 && n4 <= n3 && n4 <= n5){
        menor = n4;
    }else if(n5 <= n1 && n5 <= n2 && n5 <= n3 && n5 <= n4){
        menor = n5;
    }else{
        printf("menor: nao deu certo ;-;");
    }
    
    return menor;
}


int maior (float n1, float n2, float n3, float n4, float n5){
    int maior = 0;

    if(n1 >= n2 && n1 >= n3 && n1 >= n4 && n1 >= n5){
        maior = n1;
    }else if(n2 >= n1 && n2 >= n3 && n2 >= n4 && n2 >= n5){
        maior = n2;
    }else if(n3 >= n1 && n3 >= n2 && n3 >= n4 && n3 >= n5){
        maior = n3;
    }else if(n4 >= n1 && n4 >= n2 && n4 >= n3 && n4 >= n5){
        maior = n4;
    }else if(n5 >= n1 && n5 >= n2 && n5 >= n3 && n5 >= n4){
        maior = n5;
    }else{
        printf("maior: nao deu certo ;-;");
    }

    return maior;
}

void main (){

    float n1;
    float n2;
    float n3;
    float n4;
    float n5;

    printf("Escolha cinco numeros\n");
    printf("n1: ");
    scanf("%f", &n1);
    printf("n2: ");
    scanf("%f", &n2);
    printf("n3: ");
    scanf("%f", &n3);
    printf("n4: ");
    scanf("%f", &n4);
    printf("n5: ");
    scanf("%f", &n5);
    
    float at = (maior(n1, n2, n3, n4, n5) - menor(n1, n2, n3, n4, n5));

    printf("A amplitude total desses numeros sao: %.2f\n", at);
}