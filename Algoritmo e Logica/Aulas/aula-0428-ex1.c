#include <stdio.h>

int main(void) {
  int vet[10];
  int i;

  for(i = 0; i < 10; i++){
    printf("Informe um valor: ");
    scanf("%d",&vet[i]);
  }
  for(i = 0; i < 10; i++){
    printf("\nValor %d",vet[i]);
  }
}