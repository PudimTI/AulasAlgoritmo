#include <stdio.h>

int main(void) {
  int num, result, pares, impares;
  pares = 0;
  impares =0;
  for(int i = 1; i <=10; i++){
    printf("\nDigite o %dº número: ",i);
    scanf("%d",&num);
    result = num%2;
    if(result == 0){
      pares+=1;
      printf("\t---Número par---\n");
    }else{
      impares+=1;
      printf("\t---Número impar---\n");
    }
  }
  printf("\n\n\tQuantidade de valores pares: %d | Quantidade de valores impares: %d",pares,impares);
  return 0;
}