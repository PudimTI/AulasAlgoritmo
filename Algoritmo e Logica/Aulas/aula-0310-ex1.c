#include <stdio.h>

int main(void) {
  int numero;
  printf("\ninforme o numero inteiro: ");
  scanf("%d",&numero);
  printf("\t\tnumero: %d\n",numero);
  
  if((numero % 2) == 0){
    printf("\t\tnúmero par: %d",numero);
  }else{
    printf("\t\tnúmero impar: %d",numero);
  }
  
  return 0;
}