#include <stdio.h>

int main(void){
  int n = 3;
  
  //condition to check for even number
  if(n %2==0){
    printf("the %d is even",n);
  }
 
  //condition to check for odd number
  if(n%2 !=0){
    printf("the %d is odd",n);

  }

  return 0;
}