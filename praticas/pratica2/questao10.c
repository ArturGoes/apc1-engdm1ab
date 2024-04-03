// Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.

#include <stdio.h>
#include <math.h>

int main() {
  int numero;
  int i;
  int resultado;

  printf("Digite um número inteiro: ");
  int deu_certo = scanf("%i", &numero);

  for (i = 1; i <= 10; i++) {
    resultado = numero * i;
    printf("%i x %i = %i\n", numero, i, resultado);
  }

  printf("------------------------------\n");

  for (i = 1; i <= 10; i++) {
    resultado = numero % i;
    printf("%i %% %i = %i\n", numero, i, resultado);
  }

  printf("------------------------------\n");

  for (i = 1; i <= 10; i++) {
    resultado = numero + i;
    printf("%i + %i = %i\n", numero, i, resultado);
  }

  printf("------------------------------\n");

  for (i = 1; i <= 10; i++) {
    resultado = numero - i;
    printf("%i - %i = %i\n", numero, i, resultado);
  }
  
  return 0;
}