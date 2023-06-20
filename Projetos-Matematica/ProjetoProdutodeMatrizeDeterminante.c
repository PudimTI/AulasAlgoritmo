#include <stdio.h>

//João Pedro Vaz dos Santos Silva e Gabriel Janotto pereira

int detMatriz2x2(int matriz[2][2]) {
    return (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
}

int main(void) {
  //Feito por João Pedro Vaz e Gabriel Janotto Pereira
  int m, m1, p, n, n1, aux, det = 0;
  printf("Digite o valor de M (linha do A): ");
  scanf("%d",&m);
  printf("Digite o valor de N (coluna do A): ");
  scanf("%d",&n);
  printf("Digite o valor de M (linha do B): ");
  scanf("%d",&m1);
  printf("Digite o valor de N (coluna do B): ");
  scanf("%d",&n1);
  int vetorA[m][n], vetorB[m1][n1], vetorR[m][n1];
  
  //inserir valores para vetor A
  if(n == m1){
  p = n;  
  for(int i = 0; i < m; i++){
    for(int j = 0; j < p; j++){
      printf("\nDigite o valor de A(%d,%d): ",i+1,j+1);
      scanf("%d",&vetorA[i][j]);
    }
  }
  printf("\n---------------------------------\n");
  //inserir valores para vetor B
  for(int i = 0; i < p; i++){
    for(int j = 0; j < n1; j++){
      printf("\nDigite o valor de B(%d,%d): ",i+1,j+1);
      scanf("%d",&vetorB[i][j]);
    }
  }
  //valores do vetor R
  for(int i = 0; i < m; i++){
    
    for(int j = 0; j < n1; j++){
      aux = 0;
      
      for(int k = 0; k < p; k++){
        vetorR[i][j] = vetorA[i][k] * vetorB[k][j] + aux;
        aux = vetorR[i][j];
      }
    }
  }
  //Imprimir o vetor R
  printf("\n-------Produto-------\n");
  for(int i = 0; i < m; i++){
    
    for(int j = 0; j < n1; j++){
     printf("\t%d ", vetorR[i][j]);
    }
    printf("\n");
    }

    
    printf("\n-------Determinante-------\n");
    if(m == n1){
      if (m == 4){
        // Calcula o primeiro termo da diagonal principal
        det += vetorR[0][0] * vetorR[1][1] * vetorR[2][2] * vetorR[3][3];
        det += vetorR[0][1] * vetorR[1][2] * vetorR[2][3] * vetorR[3][0];
        det += vetorR[0][2] * vetorR[1][3] * vetorR[2][0] * vetorR[3][1];
        det += vetorR[0][3] * vetorR[1][0] * vetorR[2][1] * vetorR[3][2];
        
        // Calcula o segundo termo da diagonal principal
        det -= vetorR[0][3] * vetorR[1][2] * vetorR[2][1] * vetorR[3][0];
        det -= vetorR[0][2] * vetorR[1][1] * vetorR[2][0] * vetorR[3][3];
        det -= vetorR[0][1] * vetorR[1][0] * vetorR[2][3] * vetorR[3][2];
        det -= vetorR[0][0] * vetorR[1][3] * vetorR[2][2] * vetorR[3][1];
      }else if (m == 3){
        for (int i = 0; i < m; i++){
          int submatriz[2][2];
          int submatriz_l = 0, submatriz_c = 0;

          for (int j = 1; j < m; j++){
            for (int k = 0; k < m; k++){
              if (k != i){
                submatriz[submatriz_l][submatriz_c] = vetorR[j][k];
                submatriz_c++;

                if (submatriz_c == m - 1) {
                  submatriz_c = 0;
                  submatriz_l++;
                }
              }
            }
          }
          int submatriz_det = detMatriz2x2(submatriz);
          det += vetorR[0][i] * (i % 2 == 0 ? submatriz_det : -submatriz_det);
        }
      
      }else{
        det = detMatriz2x2(vetorR);
      }

      printf("O determinante da Matriz Produto é: %d", det);
    }else{
      printf("\nNão é possivel calcular o determinante");
    }
    
  }else{
    printf("\nNão é possível calcular o produto");
  }
}