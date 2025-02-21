// Syntax:


// sscanf(array_name, “format specifier”, &variable_name);

#include <stdio.h>

int main(void){
  char str[50];
  int a=2,b=8,c,d;

  //the string "a = 2 and b=8" is now stored into str character array
  sprintf(str,"a= %d and b= %d",a,b);

  //the value of a and b is now in c and d
  sscanf(str,"a=%d and b=%d",&c,&d);

  //display the value of c and d
  printf("c = %d and d=%d",c,d);

  return 0;
}