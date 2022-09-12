#include <stdio.h>
#include <stdlib.h>
int main(void){
  int n;
  printf("Введите номер числа фибоначи\n");
  scanf("%d",&n);
  int a=1, b=1;
  int k=3;
  while(k<=n){
    b=a+b;
    a=b-a;
    k++;
  }
  printf("Число фибоначи %d", b);
  return 0;
}
