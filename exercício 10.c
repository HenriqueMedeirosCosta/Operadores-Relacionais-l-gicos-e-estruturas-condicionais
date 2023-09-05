#include <stdio.h>

int main(void) {
  float a, b, c, x, x1, x2, delta, equacao;

  printf("De um valor para A:\n");
  scanf("%f", &a);
  printf("De um valor para B:\n");
  scanf("%f", &b);
  printf("De um valor para C:\n");
  scanf("%f", &c);

  delta = (pow(b, 2) - (4 * a *c));
   equacao = (a * (( x * x)) + (b * x) + c);
  
  

  if (delta < 0){
    printf("Não existe raiz");
  }
  else if(delta == 0 ){
    
    x1 = ((- (b) + (sqrt(delta))) / 2 * a);
    printf("%.2f, contem uma raiz unica", x);
  }
  else if (delta >= 0){

    x1 = ((- (b) + (sqrt(delta))) / 2 * a); 
    x2 = ((- (b) - (sqrt(delta))) / 2 * a); 
  

    printf("possui duas raizes reais: %.2f, %.2f", x1, x2 );
    
  }else if (equacao == 0 ){
    printf("Não existe equação do segundo grau");
  }
}
