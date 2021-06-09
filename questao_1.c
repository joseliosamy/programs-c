
#include <stdio.h>

int main(){
  //Inicializando variáveis
  float mass, mass_bkp, time = 0;
  int counter = 0;

  //Capturar a massa inicial em gramas
  printf("Digite a massa inicial em gramas: ");
  scanf("%f", &mass);
  mass_bkp = mass;

  //Calcular o tempo em que o materia radioativo perderá massa até ficar menor que 0,5g
  while( mass >= 0.5){
    //A cada repetição acrescentar 50 segundo ao tempo final
    time += 50;
    //A cada repetição o counter acrescentará +1
    counter++;
    //A cada repeticão o valor será dividido por 2
    mass /= 2;
  }
  //Imprimindo os resultados na tela do usuário
  printf("A massa inicial: %2f gramas.\n", mass_bkp);
  printf("A massa final: %f em gramas.\n", mass);
  printf("O tempo foi de: %2.f segundos.\n", time);

  return 0;
}