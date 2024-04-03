// Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).

#include <stdio.h>
#include <math.h>

int main() {
  float celsius;
  float fahrenheit;

  printf("Entre com a temperatura em graus Celsius: ");
  int deu_certo = scanf("%f", &celsius);

  printf("A temperatura em graus Fahrenheit é %.2f\n", fahrenheit = (celsius * 9 / 5) + 32);
  
  return 0;
}