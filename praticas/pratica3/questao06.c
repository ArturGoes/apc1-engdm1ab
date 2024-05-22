// Faça um programa em C que liste todos os múltiplos de n, entre 1 e 100.

#include <stdio.h>

int main () {
  int n;

  printf("Entre com um numero: ");
  int deu_certo = scanf("%i", &n);

  if (deu_certo) {
    for (int i = 1; i <= 100; i++) {
      if (i % n == 0) {
        printf("%i\n", i);
      } 
    }
    printf("\n");
  } else {
    printf("Numero invalido! Tente novamente\n");
  }
  
  
  return 0;
}