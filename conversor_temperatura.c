

#include <stdio.h>

int main(void){
  //DECLARANDO VARIAVEIS
  float celsius, temperatura;
  //CAPTURAR O VALOR DA TEMPERATURA
  printf("Digite o valor da temperatura em Farenhweit: ");
  scanf("%f", &temperatura);

  //CONVERTER FARENHEIT PARA CELSIUS 
    celsius = (temperatura - 32) * 5/9;

  //FAZER AS CONDICIONAIS 
    if(celsius < 0){
      printf("Clima congelante");
    }
    else if(celsius >= 0 && celsius <= 10){
      printf("Clima muito frio");
    }
    else if(celsius >= 10 && celsius <= 19){
      printf("Clima frio");
    }
    else if(celsius >= 20 && celsius <= 28){
      printf("Clima normal");
    }
    else if(celsius >= 29 && celsius <= 40){
      printf("Clima quente");
    }
    else if(celsius >= 41){
      printf("Clima muito quente");
    }

  return 0;
}