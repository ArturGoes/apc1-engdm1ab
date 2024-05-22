 // Faça um programa em C que liste todos os números primos de n, entre 1 e 100.

#include <stdio.h>

int main() {
  int n;

  printf("Entre com um numero inteiro: ");
  int deu_certo = scanf("%i", &n);

  if (deu_certo) {
    int qtd_divisores = 0;
    for (int i = 1; i <= n; i++){
      if (n % i == 0) {
        qtd_divisores++;
      }
    }
    if (qtd_divisores == 2) {
      printf("O numero %i é primo\n", n);
    } else {
      printf("O numero %i não é primo\n", n);
    }
  } else {
    printf("Numero invalido! Tente novamente\n");
  }
  
  return 0;
}