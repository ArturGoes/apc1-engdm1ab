// Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).

#include <stdio.h>
#include <math.h>

int main () {
  float largura;
  float comprimento;
  float area;
  float hectares;

  printf("Entre com a largura do terreno: ");
  int deu_certo = scanf("%f", &largura);

  printf("Entre com o comprimento do terreno: ");
  deu_certo = scanf("%f", &comprimento);

  area = largura * comprimento;
  hectares = area / 10000;
  
  printf("A area do terreno é %.2f hectares\n", hectares);
  
  return 0;
}