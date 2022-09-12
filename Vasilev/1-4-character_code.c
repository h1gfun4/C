#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  char first = 'A', last = 'Z';
  char x;
  int count;
  count = last - first + 1;
  x = first+10;
  printf("Первый символ: %c\n", first);
  printf("Код первого символа: %d\n", first);
  printf("Последний символ: %c\n", last);
  printf("Код последнего символа: %d\n", last);
  printf("Количество букв: %d\n", count);
  printf("Символ \'%c\' с кодом %d\n", x,x);
  
  return 0; 

}
