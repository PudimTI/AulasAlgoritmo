#include <stdio.h>

int main(void) {
  int num, result;
  result = 1;
  printf("Informe um número: ");
  scanf("%d",&num);
  for(int i = num; i >0; i--){
    result*=i;
  }
  printf("\nFatorial: %d \n",result);
  
  return 0;
}