#include <stdio.h>

int main(void) {
  int vet[8], b;

  for (int i = 0; i < 8; i++){
    printf("Digite um numero para o vetor na posição %d: ", i);
    scanf("%d",&vet[i]);
  }

  for (int i = 0; i < 8; i++){
    for (int j = i+1; j < 8; j++){
      if (vet[i] > vet[j]){
        b = vet[i];
        vet[i] = vet[j];
        vet[j] = b;
      }
    }
  }

  for (int i = 0; i < 8; i++){
    printf("\n%d", vet[i]);
  }
}