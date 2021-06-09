

#include <stdio.h>

int main(void){
  //DECLARANDO A VARIAVEL DO POLIGONO
  int poligono;

  //CAPTURANDO O VALOR DO POLIGONO 
  printf("Escolha o numero de lados do poligono(3 a 8): ");
  scanf("%i", &poligono);

  //CONDICIONANDO O VALOR NUMERICO DA VARIAVEL AO CASO DO SWITCH
  switch(poligono){
    case 3:
      printf("Triangulo ou trilatero.");
      break;
    case 4:
      printf("Quadrangulo ou quadrilatero.");
      break;
    case 5:
      printf("Pentagono ou pentalatero.");
      break;
    case 6:
      printf("Hexagono ou hexalatero.");
      break;
    case 7:
      printf("Heptagono ou heplatero.");
      break;
    case 8:
      printf("Octagono ou oclatero.");
      break;

    default:
      printf("Valor invalido, tente novamente.");
      break;
  }
  return 0;
}