#include <stdio.h>

void main (){
    float juros = 0.50;
    float deposito = 0;
    float mes = 0;
    printf("Quanto voce deposita por mes?");
    scanf("%f", &deposito);
    float rendimento = (deposito * juros);
    printf("De acordo com o juros de 0.50, voce recebe %.2f a mais no seu banco\n", rendimento);
}