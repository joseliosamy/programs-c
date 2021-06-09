

#include <stdio.h>

int main(){
  //Inicializando variáveis
  int result[10], calc, num, num_bkp, reason, counter = 10, par = 0;

  //Capturando os valores de num e reason 
    //Valor de num
  printf("Digite um valor inteiro qualquer: ");
  scanf("%d", &num);
  //Atribuindo o valor de num em outra variável de backups
  num_bkp = num;
    //Valor de reason
  printf("Digite a razao: ");
  scanf("%d", &reason);

  //Efetuando o calculo da progressão geométrica ao vetor
  for( int i = 0; i < 10; i++ ){
    calc = num *= reason;
    result[i] = calc;
  } 
  //Imprimindo os valores do vetor na ordem inversa
  for( int i = 8; i >= 0; i-- ){
    printf("%d\n", result[i]);
    //Contagem dos números pares dentro do for
    if( result[i] % 2 == 0){
      par++;
    }
  } 
  //Contagem dos número pares fora do for para incrementar o do num_bkp
  if( num_bkp % 2 == 0 ){
    par++;
  }
  //Imprimindo o primeiro valor da progressão
  printf("%d\n", num_bkp);
  printf("Existem %d valor(es) par(es)\n", par);


  return 0;
} 