#include <stdio.h>
#include <stdlib.h>
//Atividade feita por: Gabriel Janotto Pereira | JoÃ£o Pedro Vaz | Kelvyn 
struct registro{
     char nomeCliente[30];
     int codClient, numAgencia, numCorrente;
     float saldoAtual;      
};
int acumulo=1;
struct registro cliente[101];

void cadastrarCliente(){
  cliente[acumulo].codClient = acumulo;
  printf("\nNome do cliente: ");
  scanf("%s",&cliente[acumulo].nomeCliente);
  printf("\nSaldo do cliente: R$");
  scanf("%f",&cliente[acumulo].saldoAtual);
  printf("\nNÃºmero da agÃªncia: ");
  scanf("%d",&cliente[acumulo].numAgencia);
  printf("\nNÃºmero da conta corrente: ");
  scanf("%d",&cliente[acumulo].numCorrente);
  acumulo+=1;
}
void transferir(int cod, int codR, float valor, int opc){
 if(cliente[cod].saldoAtual < valor){
   printf("\nSaldo insuficiente\n\n");
 }else{
    if(opc == 1){
    printf("\nEfetuando PIX para %s no valor de R$%2.f\n\n",cliente[codR].nomeCliente, valor);
    cliente[cod].saldoAtual -= valor;
    cliente[codR].saldoAtual += valor;
  }else{
    printf("\nEfetuando transferencia para %s no valor de R$%2.f\n\n",cliente[codR].nomeCliente, valor);
    cliente[cod].saldoAtual -= valor;
    cliente[codR].saldoAtual += valor;
  }
 }
}
void consultarSaldo(int cod){
  if(cod == 0){
    for(int i = 1; i < acumulo;i++){
      printf("\nCÃ³digo do cliente: %d",cliente[i].codClient);
      printf("\nNome do cliente: %s",cliente[i].nomeCliente);
      printf("\nSaldo do cliente: R$%2.f",cliente[i].saldoAtual);
      printf("\nNÃºmero da agÃªncia: %d",cliente[i].numAgencia);
      printf("\nNÃºmero da conta corrente: %d\n\n",cliente[i].numCorrente);
      }
    }else if(cod < acumulo){
      printf("\nCÃ³digo do cliente: %d",cliente[cod].codClient);
      printf("\nNome do cliente: %s",cliente[cod].nomeCliente);
      printf("\nSaldo do cliente: R$%2.f",cliente[cod].saldoAtual);
      printf("\nNÃºmero da agÃªncia: %d",cliente[cod].numAgencia);
      printf("\nNÃºmero da conta corrente: %d\n\n",cliente[cod].numCorrente);
  }else{
      printf("\nCliente nÃ£o encontrado\n");
  }
}

void depositar(float depos, int cod){
    if(cod < acumulo && cod > 0){
      cliente[cod].saldoAtual += depos;
      printf("\nDepÃ³sito efetuado no valor de R$%2.f\n\n",depos);
    }else{
      printf("\nCliente nÃ£o encontrado\n\n");
    }
  }

void sacar(float saque, int cod){
  if(cod < acumulo && cod > 0){
    if(cliente[cod].saldoAtual >= saque){
     cliente[cod].saldoAtual -= saque;
     printf("\nSaque efetuado\n");
    }else{
     printf("\nSaldo insuficiente\n");
    }
  }else{
     printf("\nCliente nÃ£o encontrado\n\n");
  }
}
int main(void) {
  int opt = 0;
  while(opt !=7){
    printf("-------Menu-------");
    printf("\n1- Sacar");
    printf("\n2- Depositar");
    printf("\n3- Efetuar Pix");
    printf("\n4- Cadastrar cliente");
    printf("\n5- Transferir");
    printf("\n6- Consultar saldo");
    printf("\n7- Sair\n");
    scanf("%d",&opt);
    
    switch(opt){
      int cod, opc, codR;
      float valor;
      case 1:
        printf("\nInforme o cÃ³digo do cliente: ");
        scanf("%d",&cod);
        printf("\nInforme a quantidade a ser sacada: R$");
        scanf("%f",&valor);
        sacar(valor, cod);
      break;
      
      case 2:
        printf("\nInforme o cÃ³digo do cliente: ");
        scanf("%d",&cod);
        printf("\nInforme a quantidade a ser depositada: R$");
        scanf("%f",&valor);
        depositar(valor, cod);
      break;
      
      case 3:
        opc = 1;
        printf("\nInforme o cÃ³digo do cliente que irÃ¡ pagar o PIX: ");
        scanf("%d",&cod);
        printf("\nInforme o cÃ³digo do cliente que irÃ¡ receber o PIX: ");
        scanf("%d",&codR);
        printf("\nInforme a quantidade a ser transferida: R$");
        scanf("%f",&valor);
        if(valor > 2000){
          printf("\nvalor limite excedido(limite: R$2000,00)\n\n");
        }else{
          transferir(cod, codR, valor, opc);
        }
      break;
      
      case 4:
        cadastrarCliente();
      break;
      
      case 5:
        opc = 0;
        printf("\nInforme o cÃ³digo do cliente que irÃ¡ transferir: ");
        scanf("%d",&cod);
        printf("\nInforme o cÃ³digo do cliente que irÃ¡ receber: ");
        scanf("%d",&codR);
        printf("\nInforme a quantidade a ser transferida: R$");
        scanf("%f",&valor);
        transferir(cod, codR, valor, opc);
      break;
      
      case 6:
        printf("\nDigite o cÃ³digo do cliente(informe 0 para mostrar todos os clientes): ");
        scanf("%d",&cod);
        consultarSaldo(cod);
      break;
      
      case 7:
        printf("\nSaindo do programa...\n\n");
      break;
      
      default:
        printf("\nEscolha uma opÃ§Ã£o vÃ¡lida\n\n");
      break;
    }
    
  }
}