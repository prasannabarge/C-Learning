//C Program to implement the sprinf()function

#include <stdio.h>

int main(void){
  char str[50];
  int a = 2 , b = 8;

  //The string " 2 and 8 are even number"
  //is now stored into str
  sprintf(str,"%d and %d are even number",a,b);
  
  //display the string
  printf("%s",str);
  return 0;
}

//sprintf stnd for "string  print"

// Syntax:
// sprintf(array_name, “format specifier”, variable_name);