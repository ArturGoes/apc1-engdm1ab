// Faça um programa em C que calcule o fatorial de um número inteiro. n! = n * (n-1) * (n-2) * ... * 1.

#include <stdio.h>

int main () {
  int n;
  long double fatorial = 1;

  printf("Calculo do Fatorial (n!)\n\n");
  printf("Entre com um numero >= 0: ");
  int deu_certo = scanf("%i", &n);
  int numero_valido = n >= 0;

  if (deu_certo && numero_valido) {
    printf("%i! = ", n);
    for(int i = n; i > 1; i--) {
      fatorial = fatorial * i;
      printf("%i * ", i);
    }
    printf("1 = %li\n", fatorial);
  } else {
    printf("Numero invalido! Tente novamente\n");
  }
  
 return 0;
}