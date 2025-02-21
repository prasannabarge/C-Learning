#include <stdio.h>

int main(void){
  char str[128];

  printf("Enter a string: ");
  scanf("%[A-Z]s",str);

  printf("You entered: %s\n",str);

  return 0;
}

//suppose we write the uppercase print only the uppercase like'A-Z' if we use lowercase it will ignore it