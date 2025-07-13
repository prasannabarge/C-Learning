#include <stdio.h>

int main(void){
  int a  = 10,b=4,res;
  
  //addition
  res = a+b;

  printf("a+b is: %d \n",res);

  //subtraction

  res = a-b;
  
  printf("a-b is: %d\n",res);

  //multiplication
  res = a*b;
  
  printf("a*b is: %d\n",res);
  
  //division
  res = a/b;
  
  printf("a/b is: %d\n",res);
  
  //modulus
  res = a%b;
  
  printf("a%%b is: %d\n",res);

  return 0;
}
// All arithmetic operators can be used with float and int types except the modulo operator that can only be used with integers.