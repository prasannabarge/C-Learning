#include <stdio.h>

int main(void){

  char str[128];
  printf("Enter the string: ");
  scanf("%[^g]s",str);

  printf("You entered : %s\n",str);

  return 0;
}