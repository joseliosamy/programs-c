#include <stdio.h>
#include <math.h>

int main(void) {
    //VARIAVEIS DOS PONTOS
    int ponto_a[2] = {};
    int ponto_b[2] = {};

    //INSERINDO VALORES NOS PONTOS A(x,y) E B(x,y)
        //PONTO A
    printf("\n\nInsira os valores de 'A' nos pontos X e Y respectivamente.\n");
    printf("Valor de A no eixo X:\n");
    scanf("%i", &ponto_a[0]);
    printf("Valor de A no eixo Y:\n");
    scanf("%i", &ponto_a[1]);
        //PONTO B
    printf("\n\nInsira os valores de 'B' nos pontos X e Y respectivamente.\n");
    printf("Valor de B no eixo X:\n");
    scanf("%i", &ponto_b[0]);
    printf("Valor de B no eixo Y:\n");
    scanf("%i", &ponto_b[1]);

    //VARIAVEIS DAS OPERAÇÔES
    float pow_result_x, pow_result_y, sqrt_result, result;

        //ELEVANDO OS PONTOS AO QUADRADO E FAZEDNO SUA SUBTRAÇÃO
    pow_result_x = pow(ponto_b[0] - ponto_a[0], 2);
    pow_result_y = pow(ponto_b[1] - ponto_a[1], 2);

        //TIRANDO A RAIZ DO X E Y
    sqrt_result = sqrt(pow_result_x + pow_result_y);

        //RESULTADO FINAL
    result = sqrt_result;

    //MOSTRAR A DISTANCIA ENTRE OS PONTOS
    printf("\n\nA distancia entre os pontos e de: %.1f",sqrt_result);

    return 0;
}