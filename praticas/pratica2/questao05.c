// Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

#include <stdio.h>
#include <math.h>

int main() {
  float peso;
  float altura;
  float imc;

  printf("Digite o peso em kg: ");
  int deu_certo = scanf("%f", &peso);

  printf("Digite a altura em cm: ");
  deu_certo = scanf("%f", &altura);
  
  imc = peso / (altura * altura);
  printf("O imc é %.2f\n", imc);
  
  return 0;
}