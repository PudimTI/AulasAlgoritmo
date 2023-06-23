#include <stdio.h>

int main(void) {
  int i,qtd, maior = 0;
  printf("Qtd de numeros: ");
  scanf("%d",&qtd);
  int num[qtd];
  for(i = 0; i < qtd; i++){
    printf("Qual número: ");
    scanf("%d",&num[i]);
    if(num[i] > maior){
      maior = num[i];
    }
  }
  printf("\nO maior é %d\n\n",maior);
  for(int i = 0; i < qtd; i++){
    printf("%d\n",num[i]);
  }
  
}