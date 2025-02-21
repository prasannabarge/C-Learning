// Syntax: 


// scanf(“Format Specifier”, &var1, &var2, …., &varn);  

#include <stdio.h>

int main(void){
   int num1;

   printf("Enter a integer number: ");

   scanf("%d",&num1);

   printf("You have enetered:  %d",num1);

   return 0;
}