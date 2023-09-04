#include <stdio.h>

int main() {
  float a, b, c, d;
  
  printf("Digite o valor de a\n");
  scanf("%f", &a);

  printf("Digite o valor de b\n");
  scanf("%f", &b);
  
  printf("Digite o valor de c\n");
  scanf("%f", &c);
  
  printf("Digite o valor de d\n");
  scanf("%f", &d);
  
if (( a>b) && (a>c) && (a>d)){
  printf("%.2f", a); 
  
}else if (( b>a) && (b>c) && (b>d)){
  printf("%.2f", b);
  }else if (( c>a) && (c>b) && (c>d)){
  printf("%.2f", c);
   }else  {
  printf("%.2f", d);
}
  if (( a<b) && (a<c) && (a<d)){
  printf("\n%.2f", a); 
  
}else if (( b<a) && (b<c) && (b<d)){
  printf("\n%.2f", b);
  }else if (( c<a) && (c<b) && (c<d)){
  printf("\n%.2f", c);
   }else  {
  printf("\n%.2f", d);
}
  
}
  
