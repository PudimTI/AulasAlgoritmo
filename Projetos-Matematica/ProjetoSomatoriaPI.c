#include <stdio.h>
#include <math.h>

//João Pedro Vaz dos Santos Silva

int main(void) {
  double pi_soma=0, erro, k;
  float n;

  printf("Digite o valor de n: ");
  scanf("%f", &n);
  
  for (k = 0; k <= n; k++){
    pi_soma = pi_soma + (8 / ((4*k + 1)*(4*k + 3)));
  }

  erro = M_PI - pi_soma;

  if (erro < 0){
    erro = erro * -1;
  }

  printf("\nO valor aproximado de pi foi: %.6f", pi_soma);

  printf("\n\nO erro absoluto em relação ao valor correto foi: %.6f", erro);
}