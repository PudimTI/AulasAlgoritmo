#include <stdio.h>

int main(void) {
  float saldo, deposito, pix, limite,limRest;
  int operacao;
  char cliente[30];

  printf("Qual o seu nome? ");
  scanf("%s", &cliente);
  printf("Digite o saldo da conta: ");
  scanf("%f", &saldo);
  printf("Digite o limite da conta: ");
  scanf("%f", &limite);
  
  while (operacao != 5){
  printf("\n===Menu===");
  printf("\n1- Consultar saldo");
  printf("\n2- Consultar limite");
  printf("\n3- Depositar");
  printf("\n4- Pix");
  printf("\n5- Sair\n");
  scanf("%d", &operacao);

  switch(operacao)
  {
    case 1:
    printf("\nSr(a). cliente %s seu saldo atual é de %.2f\n",cliente,saldo); 
    
    break;

    case 2:
    printf("\nSr(a). cliente %s seu limite TOTAL é de %.2f\n",cliente,limite);

    if (saldo < 0){
      limRest = limite + (saldo);

      printf("Seu limite restante é igual a %.2f",limRest);
    }5
    break;

    case 3:
    printf("\nInforme a operação de depósito (valor em R$): ");
    scanf("%f",&deposito);
    saldo = saldo+deposito;

    break;

    case 4:

      printf("\nInforme a operação do pix (valor em R$): ");
      scanf("%f",&pix);
      if (pix > (saldo+limite))
      {
        printf("OPERAÇÃO INVALIDA!");
      } else {
      saldo = saldo-pix;
      }
      
      printf("Saque concluido!\n");
    break;

    case 5:
    printf("\nFINALIZADO! Volte sempre");

      
    break;

    default:
    printf("OPERAÇÃO INVALIDA\n");
    break;
  }
  }
  return 0;
}