#include <stdio.h>
#include <string.h>

void main (){
    
    char senha[10];
    char senhaV[10];

    printf("Crie uma senha: ");
    scanf("%s", senha);

    printf("Repita a senha sua senha: ");
    scanf("%s", senhaV);
    
    if(strcmp(senha, senhaV) == 0){
        printf("Voce criou uma conta :D\n");
    }else{
        printf("sua senha nao esta igual tente novamente :(\n");
    }
}