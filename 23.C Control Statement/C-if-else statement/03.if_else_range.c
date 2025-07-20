#include <stdio.h>

int main(void){
  int n  = 6;
  //check if number lies in the range [10,20]

  if(n>=10 && n<=20){
    printf("%d lies in range . ",n);
  }
  else{
    printf("%d does not lie in range.",n);
  }

  return 0;
}