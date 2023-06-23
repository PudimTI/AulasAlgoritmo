#include <stdio.h>

int main(void) {
  int i, numero, num2;
  printf("Informe um numero: ");
  scanf("%d",&numero);
  int vet[numero];
  num2 = numero;
  while (numero >= 0){
    printf("%d - ",numero);
    vet[numero] = numero; 
    numero --;
  }

  for(i = 0; i <= num2; i++){
    printf("\n\n%d - ", vet[i]);
  }
  return 0;
}