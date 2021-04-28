

#include <stdio.h>

int main(void) {
  float salario_cliente, valor_emprestimo, valor_servico;

  //CAPTURAR O VALOR DO SALARIO, EMPRESTIMO E SERVIÇO
    //SALARIO
  printf("Digite o valor do salario em reais: ");
  scanf("%f", &salario_cliente);
    //EMPRESTIMO
  printf("Digite o valor do emprestimo em reais: ");
  scanf("%f", &valor_emprestimo);
    //SERVIÇO
  printf("Digite o valor da prestacao de servico em reais: ");
  scanf("%f", &valor_servico);

  //VALOR DO SALARIO, PRESTAÇÃO DE SERVIÇO OU EMPRÉSTIMO IGUAL A ZERO, RETURN
  if(salario_cliente == 0 || valor_servico == 0 || valor_emprestimo == 0){
    printf("Zero e um valor invalido, tente novamente.");
    return 0;
  }


  //VALOR DA PRESTAÇÃO DE SERVIÇO MAIOR QUE 15% DO SALARIO DO CLIENTE
  if(valor_servico > ((salario_cliente * 15) / 100) ){
    printf("Emprestimo nao concedido.");
    return 0;
  }
  //VALOR DO EMPRESTIMO MAIOR QUE O DO SALARIO DO CLIENTE x 10
  else if(valor_emprestimo > (salario_cliente * 10)){
    printf("Emprestimo nao concedido.");
    return 0;
  }
  //VALOR DA PRESTAÇÃO DE SERVIÇO FOR MENOR QUE 1% DO EMPRESTIMO
  else if(valor_servico < ((valor_emprestimo * 1) / 100) ){
    printf("Emprestimo nao concedido.");
    return 0;
  }
  else{
    printf("\n\nEmprestimo concedido.\n");

    //VALOR DA PRESTAÇÃO DE SERVIÇO MAIOR QUE 5% DO SALARIO OU DO EMPRESTIMO = VIP
    if(valor_servico < ((salario_cliente * 5) / 100) || valor_emprestimo < (salario_cliente * 5) ){
      printf("Parabens, voce e um cliente Perfil VIP!");
      return 0;
    }
    //VALOR PRESTAÇÃO DE SERVIÇO MAIOR QUE 5% DO SALARIO E MENOR QUE 10% DO SALARIO OU EMPRESTIMO 
    else if(
    valor_servico > ((salario_cliente * 5) / 100) && 
    valor_servico < ((salario_cliente * 10) / 100) ||
    valor_emprestimo >= (salario_cliente * 5) &&
    valor_emprestimo <= (salario_cliente * 8) ){
      
      printf("Parabens, voce e um cliente Perfil Normal!");
    }else{
      printf("Perfil de risco.");
    }
    //VALOR DA PRESTAÇÃO DE SERVIÇO MAIOR QUE 5% E MENOR QUE 10% DO SALARIO OU EMPRESTIMO
  }
  return 0;
}