// putch() function is used to display a single character which is given by the user and that character prints at the current cursor location.

#include <stdio.h>
#include <conio.h>


int main(void){
  char ch;
  printf("Enter any character:\n");

  //reads a character from the keyboard
  ch=getch();

  printf("\n Entered character is: ");

  //display that character on the console 
  putch(ch);

  return 0;
}