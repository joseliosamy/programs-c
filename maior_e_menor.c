
#include <stdio.h>

int main(void){

  int firstNumber, secondNumber, thirdNumber, fourthNumber, maior, menor;



    // CASO 1, CAPTURE O PRIMEIRO NUMERO E ATRIBUA AS VARIAVEIS MAIOR E MENOR
      //CAPTURANDO O VALOR DO PRIMEIRO NUMERO
    printf("Digite o primeiro numero: ");
    scanf("%i", &firstNumber);
      //ATRIBUINDO O VALOR DO PRIMEIRO NUMERO AS VARIAVEIS MAIOR E MENOR
    maior = firstNumber;
    menor = firstNumber;




    // CASO 2, CAPTURE O SEGUNDO NUMERO, VERIFIQUE SE ELE É MAIOR OU MENOR
      //CAPTURANDO O VALOR DO SEGUNDO NUMERO
    printf("Digite o segundo numero: ");
    scanf("%i", &secondNumber);

      //VERIFICANDO SE O SEGUNDO NUMERO É MAIOR, SE SIM, ATRIBUIR A VARIAVEL "maior"
    if(secondNumber >= firstNumber){
      maior = secondNumber;
    }
      //VERIFICANDO SE O SEGUNDO NUMERO É MENOR, SE SIM, ATRIBUIR A VARIAVEL "menor"
    else if(secondNumber <= menor){
      menor = secondNumber;
    }




    // CASO 3, CAPTURE O TERCEIRO NUMERO, VERIFIQUE SE ELE É MAIOR OU MENOR
      //CAPTURANDO O VALOR DO TERCEIRO NUMERO
    printf("Digite o terceiro numero: ");
    scanf("%i", &thirdNumber);
      //VERIFICANDO SE O TERCEIRO NUMERO É MAIOR, SE SIM, ATRIBUIR A VARIAVEL "maior"
    if(thirdNumber >= maior){
      maior = thirdNumber;
    }
      //VERIFICANDO SE O TERCEIRO NUMERO É MENOR, SE SIM, ATRIBUIR A VARIAVEL "menor"
    else if(thirdNumber <= menor){
      menor = thirdNumber;
    }




    // CASO 4, CAPTURE O SEGUNDO NUMERO, VERIFIQUE SE ELE É MAIOR OU MENOR
      ///CAPTURANDO O VALOR DO QUARTO NUMERO
    printf("Digite o quarto numero: ");
    scanf("%i", &fourthNumber);
      //VERIFICANDO SE O QUARTO NUMERO É MAIOR, SE SIM, ATRIBUIR A VARIAVEL "maior"
    if(fourthNumber > maior){
      maior = fourthNumber;
    }
      //VERIFICANDO SE O QUARTO NUMERO É MENOR, SE SIM, ATRIBUIR A VARIAVEL "menor"
    else if(fourthNumber <= menor){
      menor = fourthNumber;
    }




      //EXIBIR O QUAL É O MAIOR E O MENOR NUMERO
    printf("O maior numero e: %i\n", maior);
    printf("O menor numero e: %i\n", menor);
  return 0;
}