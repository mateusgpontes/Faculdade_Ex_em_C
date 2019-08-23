#include <stdio.h>

void main (){
    char nome[20] = "";
    int salario = 0;
    int vendas = 0;

    printf("Qual seu nome? ");
    scanf("%s", nome);
    printf("Qual seu salario? ");
    scanf("%i", &salario);
    printf("Quanto voce vendeu(R$) esse mes?");
    scanf("%i", &vendas);

    int comissao = vendas / 15;
    int salarioFinal = salario + comissao;

    printf("%s voce recebe %i, vendeu %i, recebeu de comissao %i e voce recebeu no final do mes %i\n", nome, salario, vendas, comissao, salarioFinal);

}