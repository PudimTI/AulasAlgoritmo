#include <stdio.h>

int main(void) {
  int opt;
  float num1,num2,result;
  opt = 0;

  while(opt != 5){
    printf("-------Menu-------\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("5 - Sair\n");
    printf("\n");
    scanf("%d",&opt);
    printf("\n");

    switch(opt){
      case 1:
      printf("Digite o primeiro número: \n");
      scanf("%f",&num1);
      printf("Digite o segundo número: \n");
      scanf("%f",&num2);
      result = num1+num2;
      printf("\n");
      printf("Resultado da soma de %.2f e %.2f é %.2f \n",num1,num2,result);
      printf("\n");
        break;
      case 2:
      printf("Digite o primeiro número: \n");
      scanf("%f",&num1);
      printf("Digite o segundo número: \n");
      scanf("%f",&num2);
      result = num1-num2;
      printf("\n");
      printf("Resultado da subtração de %.2f e %.2f é %.2f \n",num1,num2,result);
      printf("\n");
        break;
      case 3:
      printf("Digite o primeiro número: \n");
      scanf("%f",&num1);
      printf("Digite o segundo número: \n");
      scanf("%f",&num2);
      result = num1*num2;
      printf("\n");
      printf("Resultado da multiplicação de %.2f é %.2f: %.2f \n",num1,num2,result);
      printf("\n");
        break;
      case 4:
      printf("Digite o primeiro número: \n");
      scanf("%f",&num1);
      printf("Digite o segundo número: \n");
      scanf("%f",&num2);
      result = num1/num2;
      printf("\n");
      printf("Resultado da divisão de %.2f é %.2f: %.2f \n",num1,num2,result);
      printf("\n");
        break;
      case 5:
      printf("Saindo...");
        break;
      default:
      printf("Digite uma opção válida!\n\n");
        break;
    }
  }
  
  
  return 0;
}