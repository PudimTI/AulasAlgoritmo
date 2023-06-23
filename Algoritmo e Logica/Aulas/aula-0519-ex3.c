#include <stdio.h>
void tabuado(int num);

int main(void) {
  int num;
  printf("Digite um valor: ");
  scanf("%d",&num);
  tabuado(num);
  return 0;
}

void tabuado(int num){
  int resultado[10];
  for(int i = 0; i < 10; i++){
    resultado[i] = num * (i+1);
    printf("\n%d x %d = %d", num, i+1, resultado[i]);
  }
}