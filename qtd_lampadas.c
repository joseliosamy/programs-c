


/*
---------DESCRIÇÃO DA EXECUÇÃO DE UM PROGRAMA -----------
  Em uma primeira análise, o programa quando executado é traduzido de linguagem de alto nível de baixo nível(linguagem de máquina), após isso ele começa a ser armazenado na memória ram para posteriormente ser processada e executada pelo processador, depois de a instrução ser processada e executada, e por fim processador efetua a execução da instrução nos componentes que se fazem necessários.
*/



#include <stdio.h>
#include <math.h>

int main(void){
  int potencia, qtd_lampadas;
  char tipo;
  float altura, largura, comprimento, tamanho_sala;

  //OBTENDO O TIPO DE SALA
  printf("Digite o tipo de sala: ");
  scanf("%c", &tipo);

  //OBTENDO A POTENCIA
  printf("Digite a potencia da lampada: ");
  scanf("%i", &potencia);
    //TRATANDO VALORES INESPERADOS NA POTENCIA
  if(potencia <= 0){
    printf("Valor inesperado, tente outro valor.");
    return 0;
  }

  //OBTENDO A ALTURA
  printf("Forneca a altura da sala em metros: ");
  scanf("%f", &altura);
    //TRATANDO VALORES INESPERADOS NA ALTURA
  if(altura <= 0){
    printf("Valor inesperado, tente outro valor.");
    return 0;
  }
  
  //OBTENDO A LARGURA
  printf("Forneca a largura da sala em metros: ");
  scanf("%f", &largura);
      //TRATANDO VALORES INESPERADOS NA LARGURA
  if(altura <= 0){
    printf("Valor inesperado, tente outro valor.");
    return 0;
  }

  //OBTENDO O COMPRIMENTO
  printf("Forneca a comprimento da sala em metros: ");
  scanf("%f", &comprimento);
      //TRATANDO VALORES INESPERADOS NA COMPRIMENTO
  if(comprimento <= 0){
    printf("Valor inesperado, tente outro valor.");
    return 0;
  }


  tamanho_sala = altura * largura * comprimento;
  //CALCULANDO A QUANTIDADE DE LAMPADAS DE ACORDO COM O TIPO DE SALA
    //SALA TIPO A
  if(tipo == 'A' || tipo == 'a'){
    qtd_lampadas = ceil((tamanho_sala * 8.5) / potencia);

    printf("\nPara o tipo de sala %c seram necessarias %i lampadas.", tipo, potencia);
  }
    //SALA TIPO B
  else if(tipo == 'B' || tipo == 'b'){
    qtd_lampadas = ceil((tamanho_sala * 11.3) / potencia);

    printf("\nPara o tipo de sala %c seram necessarias %i lampadas.", tipo, potencia);
  }
    //SALA TIPO C
  else if(tipo == 'C' || tipo == 'c'){
    qtd_lampadas = ceil((tamanho_sala * 15.0) / potencia);

    printf("\nPara o tipo de sala %c seram necessarias %i lampadas.", tipo, potencia);
  }
    //SALA TIPO D
  else if(tipo == 'D' || tipo == 'd'){
    qtd_lampadas = ceil((tamanho_sala * 18.8) / potencia);

    printf("\nPara o tipo de sala %c seram necessarias %i lampadas.", tipo, potencia);
  }
    //SALA TIPO E
  else if(tipo == 'E' || tipo == 'e'){
    qtd_lampadas = ceil((tamanho_sala * 22.0) / potencia);

    printf("\nPara o tipo de sala %c seram necessarias %i lampadas.", tipo, potencia);
  }
  else{
    printf("Valor inesperado, tente novamente.");
    return 0;
  }

  return 0;
}