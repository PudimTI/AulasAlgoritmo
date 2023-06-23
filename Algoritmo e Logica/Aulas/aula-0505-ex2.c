#include <stdio.h>

int main(void) {
  int numero[3][3];
  int l=0, c=0; //linha e coluna
  for (l=0; l<3; l++){
    for (c=0; c<3; c++) {
      scanf ("\n %d",&numero[l][c]);  
    }
  }
  for (l=0; l<3; l++){
    for (c=0; c<3; c++){
     printf (" %d",numero[l][c]);             
    } 
  printf ("\n"); 
  }
}