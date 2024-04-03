// Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.

#include <stdio.h>
#include <math.h>

int main() {
  int numero;
  char caractere;

  printf("Digite um número inteiro: ");
  int deu_certo = scanf("%i", &numero);

  caractere = numero;
  printf("O caractere correspondente na tabela ASCII é %c\n", caractere);
  
  return 0;
}