#include <stdio.h>

int main(void) {
  float salarioAtual, tempoServico, salarioReajustado;

  printf("Digite o salario atual do funcionario:\n");
  scanf("%f", &salarioAtual);
  printf("digite o tempo de empresa desse funcionario:\n");
  scanf("%f", &tempoServico);

  if ((salarioAtual <= 500) && (tempoServico < 1)){
    
     salarioReajustado = (((salarioAtual / 100) * 25) + salarioAtual); 

    printf("O novo salario do funcionario é: $%.2f", salarioReajustado);
  }
  else if(((salarioAtual > 500) && (salarioAtual <= 1000)) || 
 ((tempoServico >= 1 ) && ( tempoServico <= 3 ))){

    salarioReajustado = ((((salarioAtual / 100) * 20) + salarioAtual) + 100);

     printf("O novo salario do funcionario é: $%.2f", salarioReajustado);
  }
  else if (((salarioAtual > 1000) && (salarioAtual <= 1500)) || ((tempoServico >= 4 ) && ( tempoServico <= 6 ))){
     salarioReajustado = ((((salarioAtual / 100) * 15) + salarioAtual) + 200);

     printf("O novo salario do funcionario é: $%.2f", salarioReajustado);
  }
   else if (((salarioAtual > 1500) && (salarioAtual <= 2000)) || ((tempoServico >= 7 ) && ( tempoServico <= 10 ))){
     salarioReajustado = ((((salarioAtual / 100) * 10) + salarioAtual) + 300);

     printf("O novo salario do funcionario é: $%.2f", salarioReajustado);
  }
  else if ((salarioAtual > 2000) && (tempoServico > 10 )){


    salarioReajustado = salarioAtual + 500;
     
     printf("funcionario não tem direito a aumento, mas contara com um bonus de 500 reais: $%.2f", salarioReajustado);
  } else{
    printf("funcionario não tem direito a aumento");
  }
}
