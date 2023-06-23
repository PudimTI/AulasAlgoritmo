#include <stdio.h>
int tela(void);
void quadrado(int x);

int tela(void){
 printf("----------------\n");   
 quadrado(7); 
 return 5; 
}

void quadrado(int x){
  int resultado = x*x;
  printf("\nO resultado é %d",resultado);
}

int main(void) {
  tela();
  printf("X\n");
  int num1 = tela();
  printf("\n%d\n", num1);
  int num;
  printf("\nInforme um número\n");
  scanf("%d",&num);
  quadrado(num);
  return 0;
}
