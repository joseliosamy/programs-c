

#include <stdio.h>
#include <math.h>

int main(void) {
    //VARIAVEIS PARA OS LADOS DO TRIANGULO
    float side_a, side_b, side_c;

    //CAPTURANDO O VALOR DO LADO A
    printf("Insira o valor do primeiro lado do triangulo: \n");
    scanf("%f", &side_a);

    //CAPTURANDO O VALOR DO LADO B
    printf("Insira o valor do segundo lado do triangulo: \n");
    scanf("%f", &side_b);

    //CAPTURANDO O VALOR DO LADO C
    printf("Insira o valor do terceiro lado do triangulo: \n");
    scanf("%f", &side_c);

    //EFETUANDO AS VALIDAÇÕES
            //NÃO TRIANGULO 
    if(side_a + side_b < side_c || side_b + side_c < side_a || side_c + side_a < side_b) {
        printf("Nao e um triangulo!");
        exit(0);
    }
        //TRIANGULO EQUILATERO
    else if(side_a == side_b && side_b == side_c && side_a == side_c) {
        printf("Esse triangulo e equilatero!");
    }
        //TRIANGULO ISOSCELES
    else if(side_a == side_b || side_b == side_c || side_a == side_c) {
        printf("Esse triangulo e isosceles!");
    }
        //TRIANGULO ESCALENO
    else if(side_a != side_b && side_b != side_c && side_a != side_c) {
        printf("Esse triangulo e escaleno!");
    }
}