#include <stdio.h>
int idade;
void categoria(int idade){
  char categoria[30];
  if(idade<=7 && idade >=5){
    categoria[0] = "infantilA";
  }
} 


int main(void) {
  printf("\nDigite a idade do nadador: ");
  scanf("%d",&idade);
  return 0;
}