#include <stdio.h>
int quadrado(int x);
int* quadrado2();

int main(void) {
  //int num;
  
  int* array;
  array = quadrado2();
  //printf("Digite um numero: ");
  //scanf("%d",&num);
  //printf("resultado %d", quadrado(num));
  printf("resultado %d", array[0]);
  return 0;
}

int quadrado(int x){
  return x*x;
}

int* quadrado2(int n){
  static int resultado[2];
  resultado[0] = 2;
  resultado[1] = 3;
  return resultado;
}