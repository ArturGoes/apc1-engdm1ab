#include <stdio.h>

int main() {
  char opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Fazer recarga\n");
  printf("3 - Listar recados\n");
  printf("4 - Ligações feitas\n");
  printf("0 - Sair\n");
  printf("Entre com uma opção => ");
  int deu_certo = scanf("%c", &opcao);

  switch (opcao) {
    case '1': printf("Seu saldo eh R$10,00\n"); break;
    case '2': {
      float valor;
      printf("Entre com o valor da recarga: ");
      deu_certo = scanf("%f", &valor); break;
    }
    case '3': printf("Você não tem recados\n"); break;
    case '4': 
      printf("61999999999\n");
      printf("61888888888\n");
      printf("61999999999\n");
      printf("61888888888\n");
      break;
    case '0': printf("Até Logo!\n"); break;
    default: printf("Opção inválida! Tente novamente\n");
  }
  
  
  return 0;
}