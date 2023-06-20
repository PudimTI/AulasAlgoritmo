#include <stdio.h>
//João Pedro Vaz dos Santos Silva
int main(void) {
  int n, k, fatn, fatk, fatnk, operacao;
  int A, C, subnk;
  while (operacao != 4){
  
    printf("======== MENU ========\n");
    printf("1. P(n) - Permutacao Simples\n");
    printf("2. A(n,k) – Arranjo Simples\n");
    printf("3. C(n,k) – Combinação Simples\n");
    printf("4. Sair\n");
  
    scanf("%d",&operacao);

    switch (operacao)
    {    
      case 1: 

        printf("\nOperação com permutação simples\n\n");
        printf("Digite o valor para n: ");
        scanf("%d",&n);
        
        if (n > 0){
          for (fatn = 1; n > 1; n = n - 1){
            fatn = fatn * n;
          }
        }else if (n == 0){
          fatn = 1;
        }else{
          printf("\nERRO - Digite um valor inteiro positivo para n!\n\n");
          break;
        }

        printf("\nPermutação concluida: P(n) = %d\n\n",fatn);
      break;

      case 2:
        //percebi um problema após o valor de n = 13, a variavel INT não suporta o numero maior que 2147483647 e quebra
        printf("\nOperação com Arranjo simples\n\n");
        printf("Digite o valor para n: ");
        scanf("%d",&n);
        printf("Digite o valor para k: ");
        scanf("%d",&k);
        subnk = n - k;
        //printf("%d",subnk);
        if ((n > 0)&&(n >= k)){
          for (fatn = 1; n > 1; n = n - 1){
            fatn = fatn * n;
            printf("\n%d", fatn);
          }
          
          for (fatnk = 1; subnk > 1; subnk = subnk - 1){
            fatnk = fatnk * subnk;
            //printf("\n%d",fatk);
          }    
        }else if ((n == 0)&&(n == k)){
          fatn = 1;
          fatnk = 1;
        }else{
          printf("\nERRO - Digite um valor inteiro positivo para n e n >= k\n\n");
          break;
        }
        A = fatn / fatnk;

          printf("\nArranjo concluido: A(n,k) = %d\n\n",A);
      break;

      case 3:
        //percebi um problema após o valor de n = 13, a variavel INT não suporta o numero maior que 2147483647 e quebra
      printf("\nOperação com Combinação simples\n\n");
        printf("Digite o valor para n: ");
        scanf("%d",&n);
        printf("Digite o valor para k: ");
        scanf("%d",&k);
        subnk = n - k;
        //printf("%d",subnk);
        if ((n > 0)&&(n >= k)){
          for (fatn = 1; n > 1; n = n - 1){
            fatn = fatn * n;
          }
          
          for (fatk = 1; k > 1; k = k - 1){
            fatk = fatk * k;
          }
          for (fatnk = 1; subnk > 1; subnk = subnk - 1){
            fatnk = fatnk * subnk;
          }
        }else if ((n == 0)&&(n == k)){
          fatn = 1;
          fatnk = 1;
          fatk = 1;
        }else{
          printf("\nERRO - Digite um valor inteiro positivo para n e n >= k\n\n");
          break;
        }
        C = fatn / (fatk * fatnk);

        printf("\nCombinação concluida: C(n,k) = %d\n\n",C);
      break;

      case 4:
        printf("\n\nEncerrando o programa...");
      break;

      default:
        printf("\nSelecione um tópico do menu:\n");
      break;
    }
  }
  return 0;
}