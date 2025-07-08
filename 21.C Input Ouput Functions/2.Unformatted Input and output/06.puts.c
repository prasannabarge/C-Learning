//in c programming puts() functions is used to display a group of char or string which is already stored in character array....
#include <stdio.h>

int main(void){
  char name[50];
  printf("Enter your text: ");

  //reads string from user
  gets(name);

  printf("your text is: ");
  
  //display string
  puts(name);

  return 0;
}