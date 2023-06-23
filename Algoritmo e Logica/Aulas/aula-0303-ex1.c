#include <stdio.h>

int main(void){
  char nome[20];
  float salario, salarioAntigo;
  int idade;

  printf("Qual seu nome: ");
  scanf("%s",&nome);
  printf("Qual o seu salário: ");
  scanf("%f",&salario);
  printf("Qual sua idade: ");
  scanf("%d",&idade);
  printf("\n");
  printf("\n \tFuncionario %s com salário de %.2f e idade de %d", nome, salario, idade);
  printf("\n \n");

  int nasceu = 2023-idade;

  printf("\n Ano de Nascimento: %d", nasceu);

  if (idade < 18)
  {
    salarioAntigo = salario;
    salario = salario * 1.70;
  }else{
    salarioAntigo = salario;
    salario = salario*1.20;
  }

  printf("\n %s, seu salario passou de %.2f para %.2f\n", nome, salarioAntigo, salario);

  if(idade >= 4 && idade <= 8){
    printf("\n sai daqui bro \n");
  }


}