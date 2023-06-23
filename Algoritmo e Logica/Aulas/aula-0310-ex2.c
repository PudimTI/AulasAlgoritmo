#include <stdio.h>

int main(void) {
  float saldo, deposito, pix, limite;
  int operacao;
  char cliente[30];
  saldo = 1000;
  limite = 200;
  printf("\nQual seu nome: ");
  scanf("%s",&cliente);
  printf("\nSr(a). cliente %s seu saldo atual é de %.2f",cliente,saldo);
  printf("\nQual operação desejada? (1- Deposito | 2- Pix) ");
  scanf("%d",&operacao);
  if (operacao == 1)
  {
    printf("\nInforme a operação de depósito (valor em R$): ");
    scanf("%f",&deposito);
    saldo = saldo+deposito;
    printf("\nSr(a). cliente %s seu saldo atual é de %.2f",cliente,saldo);
  }
  else if(operacao == 2)
  {
    printf("\nInforme a operação do pix (valor em R$): ");
    scanf("%f",&pix);
    if (pix > (saldo+limite)){
      printf("OPERAÇÃO INVALIDA tu ta quebrado");
    } else {
    saldo = saldo-pix;
    printf("\nSr(a). cliente %s seu saldo atual é de %.2f",cliente,saldo);
      }
  }else{
    printf("\n OPERAÇÃO INVALIDA FAZ DIREITO CARA");
  }
  
  if (saldo < 0)
  {
    printf("\n\t\t\t %s, você esta utilizando o seu limite", cliente);  
  }
  return 0;
}