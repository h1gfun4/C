#include <stdio.h>
#include <stdlib.h>
int main(void){
  int n;
  int k=0, c=1;
  printf("Введите целое число  ");
  scanf("%d", &n);
  printf("|");
  do{
    printf("%d|", c);
    c=c*(n-k)/(k+1);
    k++;
  }while(k<=n);
    printf("\n");
  return 0;
}
