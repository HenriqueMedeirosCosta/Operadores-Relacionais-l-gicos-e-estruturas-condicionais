#include <stdio.h>

int main(void) {
  float a, b, c;

  printf("Digite o valor de A\n");
  scanf("%f", &a);
  printf("Digite o valor de B\n");
  scanf("%f", &b);
  printf("Digite o valor de C\n");
  scanf("%f", &c);

  if ((a > b) && (a > c)) {
    printf("\n%.2f", a);
  } else if ((b > a) && (b > c)) {
    printf("\n%.2f", b);
  } else {
    printf("\n%.2f", c);
  }

  if (((a > b) && (a < c)) || ((a < b) && (a > c))) {
    printf("\n%.2f", a);
  } else if (((b > a) && (b < c)) || ((b < a) && (b > c))) {
    printf("\n%.2f", b);
  } else {
    printf("\n%.2f", c);
  }

  if ((a < b) && (a < c)) {
    printf("\n%.2f", a);
  } else if ((b < a) && (b < c)) {
    printf("\n%.2f", b);
  } else if ((c < a) && (c < b)) {
    printf("\n%.2f", c);
  }
}
