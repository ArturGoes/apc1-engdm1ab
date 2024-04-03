// Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include <math.h>

int main () {
  float distancia;
  float angulo;
  float altura;

  printf("Entre com a distancia percorrida em km: ");
  int deu_certo = scanf("%f", &distancia);

  printf("Entre com o angulo de inclinação: ");
  deu_certo = scanf("%f", &angulo);

  altura = distancia * sin(angulo * M_PI / 180);
  printf("A altura alcançada pelo avião é %.2f\n", altura);
 
  return 0;
}