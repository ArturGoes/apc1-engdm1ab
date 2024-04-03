 // Faça um programa em C que leia três números reais e imprima a média aritmética desses números.

#include <stdio.h>
#include <math.h>

int main() {
  float numero1;
  float numero2;
  float numero3;
  float media;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%f", &numero1);

  printf("Entre com o segundo numero: ");
  deu_certo = scanf("%f", &numero2);

  printf("Entre com o terceiro numero: ");
  deu_certo = scanf("%f", &numero3);

  media = (numero1 + numero2 + numero3) / 3;
  printf("A media aritmetica dos numeros %.f, %.f e %.f é: %.f\n", numero1, numero2, numero3, media);
  
  return 0;
}