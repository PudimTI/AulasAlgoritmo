#include <stdio.h>

int main(void) {
  int opt, min, seg, verif1 = 0, verif2=0, verif3=0;
  float moto1voltas, moto2voltas, moto3voltas, media1, media2, media3;
  char nome[20];
  
  opt=0;

  printf("Um algoritmo desenvolvido por João Pedro Vaz e Gabriel Janotto\n \n");
  
  while(opt != 5){
    printf("-------Menu-------\n");
    printf("1. 1ª Volta\n");
    printf("2. 2ª Volta\n");
    printf("3. 3ª Volta\n");
    printf("4. Classificação\n");
    printf("5. Sair\n");
    scanf("%d",&opt);
    printf("\n");
    
    switch(opt){
      case 1:
        
      if (verif1 != 1){ //verificando se o case1 já foi rodado
      printf("\t1ª Volta\n\n");
      printf("Digite o tempo em minutos da 1ª moto: ");
      scanf("%d", &min);
      printf("Digite o tempo em segundos da 1ª moto: ");
      scanf("%d", &seg);
      min = min*60;
      moto1voltas += min+seg;
        
        //segunda moto
      printf("\n");
      printf("Digite o tempo em minutos da 2ª moto: ");
      scanf("%d", &min);
      printf("Digite o tempo em segundos da 2ª moto: ");
      scanf("%d", &seg);
      min = min*60;
      moto2voltas += min+seg;
        
        //terceira moto
      printf("\n");
      printf("Digite o tempo em minutos da 3ª moto: ");
      scanf("%d", &min);
      printf("Digite o tempo em segundos da 3ª moto: ");
      scanf("%d", &seg);
      min = min*60;
      moto3voltas += min+seg;
      verif1 = 1;
      }else{
        printf("1º Volta já realizada\n");
      }
      break;

      case 2:
      if(verif2!=1){ //verificando se o case2 já foi rodado
      printf("\t2ª Volta\n\n");
      printf("Digite o tempo em minutos da 1ª moto: ");
      scanf("%d", &min);
      printf("Digite o tempo em segundos da 1ª moto: ");
      scanf("%d", &seg);
      min = min*60;
      moto1voltas += min+seg;
        
        //segunda moto
      printf("\n");
      printf("Digite o tempo em minutos da 2ª moto: ");
      scanf("%d", &min);
      printf("Digite o tempo em segundos da 2ª moto: ");
      scanf("%d", &seg);
      min = min*60;
      moto2voltas += min+seg;
        
        //terceira moto
      printf("\n");
      printf("Digite o tempo em minutos da 3ª moto: ");
      scanf("%d", &min);
      printf("Digite o tempo em segundos da 3ª moto: ");
      scanf("%d", &seg);
      min = min*60;
      moto3voltas += min+seg;
        verif2 =1;
      }else{
        printf("2º Volta já realizada\n");
      }
      break;
      
      case 3:
      if(verif3 !=1){ //verificando se o case3 já foi rodado
      printf("\t3ª Volta\n\n");
      printf("Digite o tempo em minutos da 1ª moto: ");
      scanf("%d", &min);
      printf("Digite o tempo em segundos da 1ª moto: ");
      scanf("%d", &seg);
      min = min*60;
      moto1voltas += min+seg;
        
        //segunda moto
      printf("\n");
      printf("Digite o tempo em minutos da 2ª moto: ");
      scanf("%d", &min);
      printf("Digite o tempo em segundos da 2ª moto: ");
      scanf("%d", &seg);
      min = min*60;
      moto2voltas += min+seg;
        
        //terceira moto
      printf("\n");
      printf("Digite o tempo em minutos da 3ª moto: ");
      scanf("%d", &min);
      printf("Digite o tempo em segundos da 3ª moto: ");
      scanf("%d", &seg);
      min = min*60;
      moto3voltas += min+seg;
      verif3 =1;
      }else{
        printf("3º Volta já realizada\n");
      }
      break;
      
      case 4:
      if (verif3 == 1){
      
      media1 = moto1voltas/3;
      media2 = moto2voltas/3;
      media3 = moto3voltas/3;
      printf("Tempo da 1ª moto em segundos: %.2f\n",media1);
      printf("Tempo da 2ª moto em segundos: %.2f\n",media2);
      printf("Tempo da 3ª moto em segundos: %.2f\n",media3);
        printf("\n-------Classificação-------\n");
        //deus falou q n pode dar empate
        if(media1 < media2 && media1 < media3){
        printf("Primeiro lugar: 1ª Moto\n");
        if(media2<media3){
        printf("Segundo lugar: 2ª Moto\n");
        printf("Terceiro lugar: 3ª Moto\n");
        }else{
          printf("Segundo lugar: 3ª Moto\n");
          printf("Terceiro lugar: 2ª Moto\n");
        }
      }
      if(media2 < media1 && media2 < media3){
        printf("Primeiro lugar: 2ª Moto\n");
        if(media1<media3){
        printf("Segundo lugar: 1ª Moto\n");
        printf("Terceiro lugar: 3ª Moto\n");
        }else{
          printf("Segundo lugar: 3ª Moto\n");
          printf("Terceiro lugar: 1ª Moto\n");
        }
      }
        if(media3 < media2 && media3 < media1){
        printf("Primeiro lugar: 3ª Moto\n");
        if(media1<media2){
        printf("Segundo lugar: 1ª Moto\n");
        printf("Terceiro lugar: 2ª Moto\n");
        }else{
          printf("Segundo lugar: 2ª Moto\n");
          printf("Terceiro lugar: 1ª Moto\n");
        }
          
      }
      }else{
        printf("Termine as voltas antes de ver o resultado!");
      }
      printf("\n");
      break;
      
      case 5:
        printf("Saindo...");
      break;

      default:
        printf("Digite uma opção válida\n");
      break;
    }
  }
  return 0;
}