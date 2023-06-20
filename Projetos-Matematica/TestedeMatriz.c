#include <stdio.h>

int main(void) {
    int tamL = 0, tamC = 0;
    int matriz[tamL][tamC];
    printf("Digite o tamanho da linha da matriz: ");
    scanf("%d", &tamL);
    
    printf("Digite o tamanho da coluna da matriz: ");
    scanf("%d", &tamC);

    matriz[tamL][tamC] = estruturar(tamC, tamL);

    getch();
    
  return 0;
}

int estruturar(int N1, int N2) {
  int tamC=0, tamL=0;
  int i, j;
  
  

  int matriz[tamL][tamC];
  
  for (i = 0; i < tamL; i++){
    for (j = 0; j < tamC; j++){
      printf("Digite um valor para o elemento na posição %d, %d: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  for (i = 0; i < tamL; i++){
    for (j = 0; j < tamC; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  return matriz[tamL][tamC];
}