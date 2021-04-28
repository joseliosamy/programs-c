#include <stdio.h>

int main(void){
  char tipo;
  int num_menu;
  float libra, onca, kg, grama, galao, litro, milha, km, jarda, metro, result_conversao;
  //APRESENTAR O MENU
  printf("+--------------+-------------------+\n|     Tipo     |     Conversao     |\n+--------------+-------------------+\n| (P)eso       |                   |\n| .            | 1) Libra -> Kg    |\n| .            | 2) Kg -> Libra    |\n| .            | 3) Onca -> Grama  |\n| .            | 4) Grama -> Onca  |\n| (V)olume     |                   |\n| .            | 1) Galao -> Litro |\n| .            | 2) Litro -> Galao |\n| (C)omprimeto |                   |\n| .            | 1) Milha -> Km    |\n| .            | 2) Km -> Milha    |\n| .            | 3) Jarda -> Metro |\n| .            | 4) Metro -> Jarda |\n+--------------+-------------------+\n");

  printf("Use P, V ou C para acessar os tipos de conversoes: ");
  scanf("%c", &tipo);



  //ACESSANDO O TIPO DE MENU DE ACORDO COM A LETRA ESCOLHIDA
    //ACESSAR MENU PARA P
  if(tipo == 'P' || tipo == 'p'){
    printf("Voce escolheu o menu de pesos.\n");

    printf("Escolha o numero referente a conversao que deseja fazer: ");
    scanf("%i", &num_menu);

      //EFETUANDO O PROCESSO DE CONVERSÃO DE ACORDO COM O NUMERO SELECIONADO
    switch (num_menu){
      //LIBRAS EM KG
      case 1:
      printf("Voce escolheu a conversao de libra para kg.\nDigite um valor: ");
      scanf("%f", &libra);
      result_conversao = libra / 2.205;
      printf("%.2f libras sao equivalente a %.2f kg.", libra, result_conversao);
      break;


      //KG EM LIBRAS
      case 2:
      printf("Voce escolheu a conversao de kg para libras.\nDigite um valor: ");
      scanf("%f", &kg);
      result_conversao = kg * 2.205;
      printf("%.2f kg sao equivalente a %.2f libras.", kg, result_conversao);
      break;


      //ONCA EM GRAMA
      case 3:
      printf("Voce escolheu a conversao de onca para gramas.\nDigite um valor: ");
      scanf("%f", &onca);
      result_conversao = onca * 28.35;
      printf("%.2f oncas sao equivalente a %.2f gramas.", onca, result_conversao);
      break;


      //GRAMA PARA ONCA
      case 4:
      printf("Voce escolheu a conversao de gramas para onca.\nDigite um valor: ");
      scanf("%f", &grama);
      result_conversao = grama / 28.35;
      printf("%.2f gramas sao equivalente a %.2f oncas.", grama, result_conversao);
      break;
    }
  }

    //ACESSAR MENU PARA V
  else if(tipo == 'V' || tipo == 'v'){
    printf("Voce escolheu o menu de volumes.\n");

    printf("Escolha o numero referente a conversao que deseja fazer: ");
    scanf("%i", &num_menu);

      //EFETUANDO O PROCESSO DE CONVERSÃO DE ACORDO COM O NUMERO SELECIONADO
    switch (num_menu){
      //GALAO PARA LITRO
      case 1:
      printf("Voce escolheu a conversao de galao para litro.\nDigite um valor: ");
      scanf("%f", &galao);
      result_conversao = galao * 3.785;
      printf("%.2f galoes sao equivalente a %.2f litros.", galao, result_conversao);
      break;

      //LITRO PARA GALAO
      case 2:
      printf("Voce escolheu a conversao de litro para galao.\nDigite um valor: ");
      scanf("%f", &litro);
      result_conversao = litro / 3.785;
      printf("%.2f litros sao equivalente a %.2f galoes.", litro, result_conversao);
      break;
    }
  }


    //ACESSAR MENU PARA C
  else if(tipo == 'C' || tipo == 'c'){
    printf("Voce escolheu o menu de volumes.\n");

    printf("Escolha o numero referente a conversao que deseja fazer: ");
    scanf("%i", &num_menu);

      //EFETUANDO O PROCESSO DE CONVERSÃO DE ACORDO COM O NUMERO SELECIONADO
    switch (num_menu){
      //MILHA PARA KM
      case 1:
      printf("Voce escolheu a conversao de milha para km.\nDigite um valor: ");
      scanf("%f", &milha);
      result_conversao = milha * 1.609;
      printf("%.2f milhas sao equivalente a %.2f km.", milha, result_conversao);
      break;

      //KM PARA MILHA
      case 2:
      printf("Voce escolheu a conversao de km para milhas.\nDigite um valor: ");
      scanf("%f", &km);
      result_conversao = km / 1.609;
      printf("%.2f km sao equivalente a %.2f milhas.", km, result_conversao);
      break;


      //JARDA PARA METRO
      case 3:
      printf("Voce escolheu a conversao de jarda para metro.\nDigite um valor: ");
      scanf("%f", &jarda);
      result_conversao = jarda / 1.094;
      printf("%.2f jardas sao equivalente a %.2f metros.", jarda, result_conversao);
      break;


    
      //METRO PARA JARDA
      case 4:
      printf("Voce escolheu a conversao de metro para jarda.\nDigite um valor: ");
      scanf("%f", &metro);
      result_conversao = metro * 1.094;
      printf("%.2f metros sao equivalente a %.2f jardas.", metro, result_conversao);
      break;

    }
  }

  else{
    printf("Menu invalido, tente entre P, V ou C.");
    return 0;
  }
}