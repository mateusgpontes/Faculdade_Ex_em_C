#include <stdio.h>

void main (){
    char nome[20] = "";
    float salario = 0;
    float vendas = 0;

    printf("Qual seu nome? ");
    scanf("%s", nome);
    printf("Qual seu salario? ");
    scanf("%f", &salario);
    printf("Quanto voce vendeu(R$) esse mes?");
    scanf("%f", &vendas);

    float comissao = vendas / 15;
    float salarioFinal = salario + comissao;

    printf("%s voce recebe %.2f, vendeu %.2f, recebeu de comissao %.2f e voce recebeu no final do mes %.2f\n", nome, salario, vendas, comissao, salarioFinal);

}