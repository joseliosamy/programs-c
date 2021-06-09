

#include <stdio.h>

//Definindo macros
#define LINHAS 11
#define COLUNAS 11

int main(void) {
  //Inicializando variáveis
  int tabuada[LINHAS][COLUNAS];
  int i, j, num;
  //Percorrendo as dimensões do array e fazendo a tabela da multiplicação
  for (i = 0; i < LINHAS; i++) 
      for(j = 0; j < COLUNAS; j++) 
          tabuada[i][j] = i*j;  

  //Enquanto o valor da tabuata for menor que 1 ou maior que 10, o código ficara sendo sempre executando novamente
  do{
    //Capturando o valor de da tabuada quer se deseja ver a tabuada(valor referente a linha da tabela)
    printf("Digite o valor da tabuada de 1 a 10 que deseja ver: ");
    scanf("%d", &num);

  }while(num < 1 || num > 10);

    //imprimindo o resultado da tabuada escolhida na tela
    for(j = 1; j < LINHAS; j++)
      printf("%d x %d = %d\n", num, j, tabuada[num][j]);
  
  return 0;
}