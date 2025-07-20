#include <stdio.h>

int main(void) {
   
  int a  = 3, b = 6, c = 11;
  //Finding the largest by comparing using relational operator with if-else
   if(a >= b){
    if(a>=c)
      printf ("%d",a);
    
    else
      printf("%d",c);
    
   }
   
   else{
    if(b >=c)
      printf("%d",b);
    
    else
      printf("%d",c);
    
   }

   return 0;

  
}