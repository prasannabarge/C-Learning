#include <stdio.h>

int main(void){
   
  int var = 1;

  switch (var){
    case 1:
    printf("Case 1 is matched.");
    break;
    case 2:
    printf("Case 2 is matched.");
    case 3:
    printf("case 3 is matched");
    default:
    printf("default case is matched:");
    break;
  }

  return 0 ;
}


//syntax of switch statement

/*
switch(expression){
  case value1:
  code _block1
  case value2:
  code_block2
  case value3:
  code block3
  default:
  default code of block
  }
*/