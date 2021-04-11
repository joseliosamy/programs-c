
#include <stdio.h>
#include <math.h>

int main(void) {
    //VARIAVEIS PARA CONTER CADA MEDIDA
    float milimetros, centimetros, decimetros, metros;

    //CAPTURAR O VALOR EM METROS
    printf("Digite o valor em metros para ser convertido:");
    scanf("%f", &metros);

    //FAZER A OPERAÇÃO DE CONVERSÃO
    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;

    //MOSTRAR O RESULTADO
    printf("\n\n\nConvertendo %.1f metros, teremos: \n\n%.0f decimetros \n%.0f centimetros\n%.0f milimetros\n\n", metros, decimetros, centimetros, milimetros);
    return 0;
}