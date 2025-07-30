#include <stdio.h>

int main(void){
  char ch = 'a';

  while(ch<='z'){
    printf("%c\n",ch);
    ch+=1; //ch++;
  }
   
  printf("\n");
  ch='z';

  while(ch>='a'){
    printf("%c\n",ch);
    ch--;
  }
}