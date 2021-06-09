

#include <stdio.h>

int main(void) {
  float altura, largura, comprimento, capacidade, consumo_medio_diario,consumo, autonomia;

  //PEGAR A CAPACIDADE TOTAL DO RESERVATÓRIO E TRANFORMALA EM LITROS
    //CAPTURAR O VALOR DA ALTURA
  printf("Digite o valor da altura do reservatorio em cm: ");
  scanf("%f", &altura);
    //CAPTURAR O VALOR DA LARGURA
  printf("Digite o valor da largura do reservatorio em cm: ");
  scanf("%f", &largura);
    //CAPTURAR O VALOR DO COMPRIMENTO
  printf("Digite o valor do comprimento do reservatorio em cm: ");
  scanf("%f", &comprimento);

    //TRANSFORMANDO EM LITROS
  capacidade = (altura * largura * comprimento) / 1000;

  //EXIBIR A CAPACIDADE TOTAL EM LITROS
  printf("\nA capacidade total do reservatorio e de %0.fL.\n\n",capacidade);

  //CAPTURAR O CONSUMO MEDIO DIARIO
  printf("Digite o valor em litros do consumo diario de agua: ");
  scanf("%f", &consumo_medio_diario);
  
  //CALCULAR A AUTONOMIA TOTAL DO RESERVATORIO EM LITROS
  autonomia = (capacidade / consumo_medio_diario);
  printf("\nA autonomia do reservatorio e de: %0.f dias.\n", autonomia);

  //CLASSIFICAR O CONSUMO
  if(autonomia < 2){
    printf("\nConsumo elevado!");
  }
  else if(autonomia >=2 && autonomia <= 7){
    printf("\nComsumo moderado!");
  }
  else if(autonomia > 7){
    printf("\nConsumo reduzido!");
  }
  else{
    printf("\nInvalido.");
  }
  return 0;
}