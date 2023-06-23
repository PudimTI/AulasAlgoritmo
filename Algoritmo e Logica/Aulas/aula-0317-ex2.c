#include <stdio.h>

int main(void) {
  int num,soma;
  soma = 0;
  printf("Digite um número inteiro: \n");
  scanf("%d",&num);
  printf("Números anteriores a %d até o 0 \n\n",num);
  for(int i = num; i >= 0; i--){
    printf("%d\n",i);
    soma +=i;
  }
  printf("\tSoma de todos os valores: %d\n",soma);
  
  return 0;
}