#include <stdio.h>

int main() {

  int numero;

printf("Digite um numero\n");
  scanf("%d", &numero);
  if ((numero == 5)|| (numero == 200)|| (numero == 400)){
    printf("Seu numero é: %d", numero);
    
  }else if ((numero > 500)&& (numero<1000)){
    printf("Seu numero está entre 500 e 1000 : %d", numero);
  }
  else {
    printf("Seu numero nao esta em nenhuma condiçao");
  }
  
  
}
