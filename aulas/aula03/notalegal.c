#include <stdio.h>

int main () {
  printf("\x1b[31m----------------------------\n");
  printf("     N O T A  L E G A L     \n");
  printf("----------------------------\x1b[0m\n");
  printf("ITEM           QTD VALOR   \n");
  printf("%-14s %03i \x1b[34m%8.2f\x1b[0m\n", "Banana nanica", 2, 20.00);
  printf("%-14s %03i \x1b[34m%8.2f\x1b[0m\n", "Uva Globo", 1, 15.00);
  printf("%-14s %03i \x1b[34m%8.2f\x1b[0m\n", "Laranja Lima", 1, 18.00);
  
  // printf("Banana nanica   2   R$ 20.00\n");
  // printf("Uva Globo       1   R$ 15.00\n");
  // printf("Laranja Lima    1   R$ 18.00\n");
  printf("----------------------------\n");
  printf("TOTAL...........: \x1b[35m%9.2f\x1b[0m\n", 53.00);
    
  return 0;
}