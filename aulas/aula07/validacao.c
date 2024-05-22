#include <stdio.h>

int main() {
  int n;
  int n_valido = 1;
  
  while (n_valido == 0) {
    printf("Entre com um numero de 1 a 10: ");
    int deu_certo = scanf("%i", &n);
    int numero_valido = n >= 1 && n <= 10;
  
    if (deu_certo && numero_valido) {
      printf("Segue o Jogo!\n");
    } else {
      printf("Numero invalido! Tente novamente\n");
    }
  }
  return;
}