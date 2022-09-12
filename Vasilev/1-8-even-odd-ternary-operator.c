#include <stdio.h>
#include <stdlib.h>
int main(void){
  int number;
  printf("Введите число\n");
  scanf("%d",&number);

  printf(number % 2 ?"Нечетное число!\n": "Четное число!\n");
  return 0;
}
