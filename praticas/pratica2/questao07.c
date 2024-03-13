#include <stdio.h>

int main() {
  float valor_da_hora_de_trabalho = 150.0f;
  float total_de_horas_trabalhadas = 100.0f;
  
  const float IR = 0.25f;
  const float INSS = 0.11f;

  float valor_salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float valor_imposto_renda = valor_salario_bruto * IR;
  float valor_imposto_previdencia = valor_salario_bruto * INSS;
  float valor_salario_liquido = valor_salario_bruto - valor_imposto_renda - valor_imposto_previdencia;
  printf("\x1b[32m-----------------------------------\n");
  printf("      C O N T R A C H E Q U E      \n");
  printf("-----------------------------------\x1b[0m\n");
  printf("Salario Bruto...: R$ \x1b[34m%14.2f\x1b[0m\n", valor_salario_bruto);
  printf("Imposto Renda...: R$ \x1b[31m%14.2f\x1b[0m\n", valor_imposto_renda);
  printf("Imposto Previ...: R$ \x1b[31m%14.2f\x1b[0m\n", valor_imposto_previdencia);
  printf("Salario Liquido.: R$ \x1b[34m%14.2f\x1b[0m\x1b[0m\n", valor_salario_liquido);

  return 0;
}
