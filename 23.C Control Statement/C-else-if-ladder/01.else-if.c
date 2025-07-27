#include <stdio.h>

int main(void){
 
  int marks ;
  printf("ENTER YOUR MARKS:");
  scanf("%d",&marks);

 //Assign grade based on marks
  if(marks>=90){
    printf("A \n");
  } else if( marks >=80){
     printf("B \n");
  }else if(marks >= 70){
     printf("C \n");
  }
  else if(marks>=60){
     printf("D \n");
  }
  else{
     printf("F \n");
  }
  return 0 ;

}
/*
* if(condition){.....}
* else if(condition){
* code to be executed 
*   }
*else{
}
}
*/