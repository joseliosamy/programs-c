

#include <stdio.h>
#include <math.h>

int main(void){
  int day, month, year;
  //CAPTURAR O DIA 
  printf("Digite o dia: ");
  scanf("%i", &day);
    //VERIFICANDO SE O VALOR DIGITADO É INSUFICIENTE OU ULTRAPASSA O PERMITIDO
  if(day <= 0 || day >= 31){
    printf("Numero invalido! Tente novamente.");
    return 0;
  }
  //CAPTURAR O MES 
  printf("Digite o mes: ");
  scanf("%i", &month);
  if(month <= 0 || month > 12){
    printf("Numero invalido! Tente novamente.");
    return 0;
  }
    //VERIFICANDO SE O VALOR DIGITADO É INSUFICIENTE OU ULTRAPASSA O PERMITIDO

  //CAPTURAR O ANO 
  printf("Digite o ano: ");
  scanf("%i", &year);
    //VERIFICANDO SE O VALOR DIGITADO É INSUFICIENTE OU ULTRAPASSA O PERMITIDO
  if(year <= 0 || year >= 2200){
    printf("Numero invalido! Tente novamente.");
    return 0;
  }

  //CONDICIONAR CADA NUMERO AO SEU DEVIDO MÊS E EXIBIR
  switch (month){
    case 1:
      printf("%i, Janeiro de %i", day, year);
      break;
    case 2:
      printf("%i, Fevereiro de %i", day, year);
      break;
    case 3:
      printf("%i, Março de %i", day, year);
      break;
    case 4:
      printf("%i, Abril de %i", day, year);
      break;
    case 5:
      printf("%i, Maio de %i", day, year);
      break;
    case 6:
      printf("%i, Junho de %i", day, year);
      break;
    case 7:
      printf("%i, Julho de %i", day, year);
      break;
    case 8:
      printf("%i, Agosto de %i", day, year);
      break;
    case 9:
      printf("%i, Setembro de %i", day, year);
      break;
    case 10:
      printf("%i, Outubro de %i", day, year);
      break;
    case 11:
      printf("%i, Novembro de %i", day, year);
      break;
    case 12:
      printf("%i, Dezembro de %i", day, year);
      break;
  }
}