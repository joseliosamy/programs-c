

#include <stdio.h>
#include <math.h>

int main(void){
    //VARIAVEIS DOS NUMEROS
    float first_num, second_num;
    //VARIAVEIS DAS OPERAÇÕES
    float sum, product, pow_result, sqrt_result, result, sin_result, subtract_result;

    //CAPUTRANDO OS VALORES
    printf("Informe o valor do primeiro numero:\n");
    scanf("%f",&first_num);
    printf("Informe o valor do segundo numero:\n");
    scanf("%f", &second_num);

    //OPERAÇÃO DE SOMA
    sum = first_num + second_num;
    result = sum;
    printf("\n\nA soma e igual a: %.1f\n", result);

    //OPERAÇAO DO PRODUTO PELO QUADRADO
    pow_result = pow(second_num, 2);
    product = first_num * pow_result;
    result = product;

    printf("O produto do primeiro pelo quadrado do segundo e: %.1f\n", result);

    //OPERAÇÃO QUADRADRADO MENOS QUADRADO
    pow_result = pow(first_num,2) - pow(second_num,2);
    result = pow_result;

    printf("O quadrado do primeiro menos o quadrado do segundo e: %.1f\n", result);

    //OPERAÇÃO RAIZ QUADRADA DA SOMA DOS QUADRADOS
    pow_result = pow(first_num,2) + pow(second_num,2);
    sqrt_result = sqrt(pow_result);
    result = sqrt_result;

    printf("A raiz quadrada da soma dos quadrados e: %.1f\n", result);

    //DIFERENÇA ENTRE SENO DO PRIMEIRO PELO NUMERO DO SEGUNDO
    subtract_result = first_num - second_num;
    sin_result = sin(subtract_result);
    result = sin_result;

    printf("A diferenca entre o seno do primeiro pelo numero do segundo e: %.1f\n", result);
    return 0;
}