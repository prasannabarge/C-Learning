//gets() function reads a group of character or strings from the keyboard by the user and these character get stored in a character array..


#include <stdio.h>
#include <conio.h>

int main(void){
  //declaring a char type array of length 50 character
  char name[50];

  printf("please enter some texts: ");

  //reading a line of character or a string
  gets(name);


  printf("you have entered : %s", name);

  return 0 ;
  
}