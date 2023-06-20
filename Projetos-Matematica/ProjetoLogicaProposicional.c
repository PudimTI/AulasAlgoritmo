#include <stdio.h>

int main(void) {
//Projeto de matemática discreta
//João Pedro Vaz dos Santos Silva

  int operacao, p, q, valorLogico;

  printf ("MENU\n");
  printf ("1. ~p\n");
  printf ("2. p ^ q\n");
  printf ("3. p v q\n");
  printf ("4. p _v q\n");
  printf ("5. p -> q\n");
  printf ("6. p <-> q\n\n");
  
  scanf("%d", &operacao);
  
  switch (operacao)
  {
    case 1 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso: ");
    scanf("%d", &p);
    
    valorLogico = !p;
    //IMPRIMIR O RESULTADO
    printf("O valor de p = %d após a operação logica ~p: %d", p, valorLogico);
    break;
    
    case 2 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso: ");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso: ");
    scanf("%d", &q);
    //FAZER A LOGICA
    valorLogico = (p && q);
    //IMPRIMIR O RESULTADO
    printf("O valor de p = %d e q = %d após a operação logica p ^ q : %d", p, q, valorLogico);
    break;
    
    case 3 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso: ");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso: ");
    scanf("%d", &q);
    //FAZER A LOGICA
    valorLogico = (p || q);
    //IMPRIMIR O RESULTADO
    printf("O valor de p = %d e q = %d após a operação logica p V q : %d", p, q, valorLogico);
    break;
    
    case 4 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso: ");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso: ");
    scanf("%d", &q);
    //FAZER A LOGICA
    valorLogico = !((!p||q)&&(!q||p));
    //IMPRIMIR O RESULTADO
    printf("O valor de p = %d e q = %d após a operação logica p _v q : %d", p, q, valorLogico);
    break;
    
    case 5 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso: ");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso: ");
    scanf("%d", &q);
    //FAZER A LOGICA
    valorLogico = ((!p)||q);
    //IMPRIMIR O RESULTADO
    printf("O valor de p = %d e q = %d após a operação logica p -> q : %d", p, q, valorLogico);
    break;
    
    case 6 :
    printf ("p = Digite 1 para verdadeiro ou 0 para falso: ");
    scanf("%d", &p);
    printf ("q = Digite 1 para verdadeiro ou 0 para falso: ");
    scanf("%d", &q);
    //FAZER A LOGICA
    valorLogico = ((!p||q)&&(!q||p));
    //IMPRIMIR O RESULTADO
    printf("O valor de p = %d e q = %d após a operação logica p <-> q : %d", p, q, valorLogico);
    break;
    

 

    default :
    printf ("Invalido!\n");
  }
  
  return 0;
}
