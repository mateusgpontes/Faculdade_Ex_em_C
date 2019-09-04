#include <stdio.h>
#include <math.h>

void main (){
    float a;
    float b;
    float c;
    float x;

    printf("Escolha o valor de a: ");
    scanf("%f", &a);

    printf("Escolha o valor de b: ");
    scanf("%f", &b);

    printf("Escolha o valor de c: ");
    scanf("%f", &c);

    double delta, raizDelta;
    float quadradoB = b * b;
    delta = quadradoB - (4 * a * c);
    raizDelta = sqrt(delta);

    float bhaskaraMais = (-(b) + raizDelta) / (2 * a);
    float bhaskaraMenos = (-(b) - raizDelta) / (2 * a);
    
    printf("De acordo com a esquacao de segundo grau --> %.0f.x2 + %.0f.x + %.0f.\n", a, b, c);
    printf("Os parametro de x sao (%.2f, %.2f)\n", bhaskaraMais, bhaskaraMenos);

}