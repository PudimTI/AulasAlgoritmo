#include <stdio.h>

int main(void) {
  char nome[20], produto[20];
  float valorUnit, total, valorAntig, valorParcela;
  int qtd, parcelas;

  printf ("Digite seu nome: ");
  scanf ("%s", &nome);
  printf ("Qual produto irá comprar? ");
  scanf ("%s", &produto);
  printf ("Qual o preço do produto: R$");
  scanf ("%f", &valorUnit);
  printf ("Quanto você irá comprar: ");
  scanf ("%d", &qtd);
  printf ("Senhor(a) %s, gostaria de parcelar em quantas vezes? ",nome);
  scanf("%d", &parcelas);
  printf ("\n \n");
  total = valorUnit * qtd;
  valorAntig = total;
  if(parcelas == 1){
     total = total *0.9;
  }else if(parcelas >= 6 && parcelas <=10){
    total = total * 1.08;
    
  }else if(parcelas>10){
    total = total * 1.10 + 283;
  }
  valorParcela = total / parcelas;
  printf("\tValor antigo: R$%.2f\n\n",valorAntig);
  printf("Valor total do produto %s: R$%.2f\n",produto,total);
  printf("Valor da parcela: R$%.2f\n",valorParcela);

  printf("\n\nMuito obrigado %s, volte sempre!!",nome);
  
}