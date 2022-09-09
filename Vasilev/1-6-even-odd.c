#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  int number;
  printf("Введите целое число");
  scanf("%d", &number);
  if (number %2 == 0){
      printf("Число четное");
  }
  else{
    printf("Число не четное");
  }
  
  return 0;
}
