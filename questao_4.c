#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main () {
  //Inicializando variáveis
  char string_word[51];
  int contador = 0;
  
  //Capturando uma palavra
  printf("Digite uma palavra: ");
  gets(string_word);


  //Percorrendo o tamanho da string 
  for (int i = 0; i < strlen(string_word); i++) {

    //Identificando, contabilizando e convertendo as vogais da string
    switch (string_word[i]) {
      case 'a': 
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      //Contabilizando as vogais minusculas
      if ( string_word[i] >= 97 || string_word[i] >= 122 ) contador++;

      //Convertendo o que é maiusculo para minusculo
      string_word[i] = toupper(string_word[i]);
      break;

      case 'A': 
      case 'E':
      case 'I':
      case 'O':
      case 'U':

      //contabilizando as vogais maiusculas
      if ( string_word[i] >= 65 || string_word[i] >= 90 ) contador++;

      //Convertendo o que é maiusculo para minusculo
      string_word[i] = tolower(string_word[i]);

      break;
    }    
  }

  printf("\nPalavra convertida: %s\n", string_word);
  printf("%d vogais foram alteradas.\n", contador);
  
  return 0;
}