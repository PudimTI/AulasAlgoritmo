#include <stdio.h>

//Feito por João Pedro Vaz dos Santos Silva e Gabriel Janotto Pereira

int main(void) {
  int operacao, tamM1m, tamM1n, tamM2m, tamM2n;
  int l, c;
  printf("Programa para calcular matrizes!\n\n");
  do 
  {
    operacao = 1;
    tamM1m = 0;
    tamM1n = 0;
    tamM2m = 0;
    tamM2n = 0;
    
    printf("Informe a quantidade de linhas da Matriz A: ");
    scanf("%d", &tamM1m);
    printf("Informe a quantidade de colunas da Matriz A: ");
    scanf("%d", &tamM1n);
    int matriz1[tamM1m][tamM1n];

    printf("Informe a quantidade de linhas da Matriz B: ");
    scanf("%d", &tamM2m);
    printf("Informe a quantidade de colunas da Matriz B: ");
    scanf("%d", &tamM2n);
    int matriz2[tamM2m][tamM2n];
    printf("\n");
    
    for (l = 0; l < tamM1m; l++){
      for (c = 0; c < tamM1n; c++){
        printf("Digite o valor para A(%d,%d) ",l+1, c+1);
        scanf("%d", &matriz1[l][c]);
      }
    }
    printf("\n");
    
    for (l = 0; l < tamM2m; l++){
      for (c = 0; c < tamM2n; c++){
        printf("Digite o valor para B(%d,%d) ",l+1, c+1);
        scanf("%d", &matriz2[l][c]);
      }
    }
    printf("\n");
    
  while ((operacao < 3) || (operacao >= 5)) {
  
    printf("======== MENU ========\n");
    printf("1. Soma de Matriz\n");
    printf("2. Subtração de Matriz\n");
    printf("3. Reestruturar as Matrizes\n");
    printf("4. Sair\n");
  
    scanf("%d",&operacao);
    printf("\n");
    switch (operacao)
    {
      case 1:
        if ((tamM1m == tamM2m) && (tamM1n == tamM2n)){
          int matrizSoma[tamM1m][tamM1n];
          printf("Executando soma das Matrizes A + B... \n");
          for (l = 0; l < tamM1m; l++){
            for (c = 0; c < tamM1n; c++){
              matrizSoma[l][c] = matriz1[l][c] + matriz2[l][c];
            }
          }

          for (l = 0; l < tamM1m; l++){
            for (c = 0; c < tamM1n; c++){
              printf("%d ", matrizSoma[l][c]);
            }
            printf("\n");
          }
          printf("\n");
          
        }else{
          printf("A estrutura das Matrizes precisa ser igual para realizar o calculo \n");
        }
      break;

      case 2:
        if ((tamM1m == tamM2m) && (tamM1n == tamM2n)){
          int matrizSub[tamM1m][tamM1n];
          printf("Executando subtração das Matrizes A - B... \n");
          for (l = 0; l < tamM1m; l++){
            for (c = 0; c < tamM1n; c++){
              matrizSub[l][c] = matriz1[l][c] - matriz2[l][c];
            }
          }

          for (l = 0; l < tamM1m; l++){
            for (c = 0; c < tamM1n; c++){
              printf("%d ", matrizSub[l][c]);
            }
            printf("\n");
          }
          printf("\n");
          
        }else{
          printf("A estrutura das Matrizes precisa ser igual para realizar o calculo \n");
        }
      break;

      case 3:
        printf("Redirecionando para reestruturar Matrizes...\n\n");
      break;

      case 4:
        printf("Saindo... \n");
      break;

      default:
        printf("Operação invalida\n");
      break;
    }
  }
  }while (operacao != 4);
  return 0;
}