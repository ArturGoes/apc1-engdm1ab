// Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

#include <stdio.h>
#include <math.h>

int main() {
  int valor_compra;
  int ano_fabricacao;
  int ano_depreciacao;
  int valor_depreciado;

  printf("Digite o valor de compra: ");
  int deu_certo = scanf("%i", &valor_compra);

  printf("Digite o ano de fabricacao: ");
  deu_certo = scanf("%i", &ano_fabricacao);

  printf("Digite o ano de depreciacao: ");
  deu_certo = scanf("%i", &ano_depreciacao);

  valor_depreciado = valor_compra * (ano_depreciacao - ano_fabricacao) * 0.01; 
  printf("O valor depreciado do veiculo é %i\n", valor_depreciado);
  
  return 0;
}