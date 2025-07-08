#include <conio.h>
#include <stdio.h>

int main(void){
  char ch;

  printf("Enter the character: ");

  //taking a character from keyboard 

  ch = getchar();

  printf("%c",ch);

  return 0;
}

//the getchar() function is used to read only a first single character from  the keyboard
