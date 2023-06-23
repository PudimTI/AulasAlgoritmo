#include <stdio.h>

int main(void) {
  int tam, metade, i, pesquisa, encontro=0, tamVet2=0, cont=0;
  printf("Digite o tamanho: ");
  scanf("%d",&tam);
  int num[tam];

  metade = (tam / 2);
  
  for (i = metade; i<tam; i++){
    printf("Digite um valor para o vetor: ");
    scanf("%d",&num[i]);
  }
  for (i = 0; i < metade; i++){
    printf("Digite um valor para o vetor: ");
    scanf("%d",&num[i]);
  }
  for(i = 0; i < tam; i++){
    printf("- %d -",num[i]);
  }

  printf("\nPesquisar valor: ");
  scanf("%d",&pesquisa);

  for(i = 0; i<tam; i++){
    if(pesquisa == num[i]){
      tamVet2 ++;
      encontro = 1;
    }
  }
  //printf(" %d ", tamVet2);
  int pesquisaPos[tamVet2];
  for(i = 0; i<tam; i++){
    if(pesquisa == num[i]){
      pesquisaPos[cont] = i;
      cont++;
    }
  }
  if(encontro == 1){
     printf("\nNúmero %d encontrado nas posição: ", pesquisa);
    for (i = 0; i < tamVet2; i++){
      printf("| %d |", pesquisaPos[i]);
    }
  }else{
     printf("\nNúmero não encontrado");
  }
  
  return 0;
}