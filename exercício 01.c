#include <stdio.h>
#include <math.h>

int main() {

  float num, resultado;
  
    printf("Digite um número\n");
    scanf("%f", &num);
  if (num >= 0){
    resultado = sqrt(num);
    printf(" A raiz quadrada é: %.1f", resultado);
  }else{ 
    resultado= num * num;
  printf("O quadrado do numero é: %.1f", resultado);
  }
    
    
  }

