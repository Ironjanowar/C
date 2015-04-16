#include <stdio.h>

int main(){
  
  int num, i;

  printf("Introduzca un numero: ");
  scanf("%i", &num);

  for(i = num; i > 0; i--){
    if((num/2) > i){
      break;

    }else{
      printf("%d + %d = %d\n", (i), (num-i), num);

    }
  }

  return 0;
}