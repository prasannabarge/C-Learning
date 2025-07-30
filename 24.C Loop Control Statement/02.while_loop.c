#include <stdio.h>

int main(void){
  int i  = 1;

  while(i<=10){
    printf("%d\n",i);
    i++;
  }
  printf("\n");
  i  =10;

  while(i>=1){
    printf("%d\n",i);
    i--; //i-=1
  }

  return 0;
}