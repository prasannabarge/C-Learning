#include <stdio.h>

int main(){
    int a = 10, res;
  
    // post-incrementing a
    // res is assigned 10, a is not updated yet
    res = a++;
  	// a becomes 11 now
  
    printf("a is %d, res is %d\n", a,res); 

    // post-decrement example:
    // res is assigned 11, a is not updated yet
    res = a--;
  	// a becomes 10 now
    printf("a is %d, res is %d\n", a, res); 
  
    // pre-increment example:
    // res is assigned 11 now since
    // a is updated here itself
    res = ++a;

    // a and res have same values = 11
    printf("a is %d, res is %d\n", a, res);

    // pre-decrement example:
    // res is assigned 10 only since a is updated here
    // itself
    res = --a;

    // a and res have same values = 10
    printf("a is %d, res is %d\n", a, res);
  
  	printf("+a is %d\n", +a);
  	printf("-a is %d", -a);

    return 0;
}