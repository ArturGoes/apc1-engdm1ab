// Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).

#include <stdio.h>

int main() {
  float a, b, c;
  float delta;
  float x1, x2;

  printf("Entre com o valor de a: ");
  int deu_certo = scanf("%f", &a);

  printf("Entre com o valor de b: ");
  deu_certo = scanf("%f", &b);

  printf("Entre com o valor de c: ");
  deu_certo = scanf("%f", &c);

  delta = b * b - 4 * a * c;
  x1 = (-b + sqrt(delta)) / (2 * a);
  x2 = (-b - sqrt(delta)) / (2 * a);

  printf("As raizes da equacao %fx² + %fx + %f sao %f e %");
  
  return 0;
}