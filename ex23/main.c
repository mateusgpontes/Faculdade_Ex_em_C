#include <stdio.h>

void main () {
    char nome[50] = "";
    printf("Qual o nome do funcionario que deseja almentar o salario? ");
    scanf("%s", nome);

    float salario = 0;
    printf("Qual o salario dele? ");
    scanf("%f", &salario);

    float porcetagem = 0;
    printf("Quantos porcento quer almentar do salario dele? ");
    scanf("%f", &porcetagem);

    float res = ((salario / porcetagem) * 100) + salario;
    printf("O salario de %.2f do funcionario %s com um almento de %.2f porcento foi para %.2f\n", salario, nome, porcetagem, res);
}