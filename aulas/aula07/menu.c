#include <stdio.h>
#include <stdlib.h>

int main () {
  int opcao = 0;

    do {  
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Iniciar\n");
    printf("2 - Resultado\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opcao => ");
    deu_certo = scanf("%i", &opcao);
    if (!deu_certo) opcao = 0;
    while(getchar() != '\n');
      
    switch(opcao) {
      case 1:{
        deu_certo = system("clear");
        char nome[31];
        printf("Nome do jogador: ");
        deu_certo = scanf("%[^\n]s", nome);
        while(getchar() != '\n');
        printf("Ola %s\n", nome);
        printf("Pressione ENTER p/ iniciar");
        getchar();
        break;
      }
      case 2: {  
        deu_certo = system("clear");
        printf("Resultado\n");
        printf("1º lugar - Artur     -  1000\n");
        printf("2º lugar - João      -  700\n");
        printf("3º lugar - Matheus   -  600\n");
        printf("4º lugar - Maria     -  500\n");
        printf("5º lugar - Fernanda  -  100\n");
        printf("Pressione ENTER p/ voltar");
        getchar();
        break;
      }
      case 3:   break;
      case 4:   break;
      default:
        printf("Opcao invalida! Pressione ENTER p/ continuar");
      getchar();
    }
  } while (opcao != 4); 
  return 0;
}