#include <stdio.h>

int main(void){
  int i = 10;
  do {
    printf("%d\n",i);
    i-=1;
  }while(i>=1);

  return 0 ;
}