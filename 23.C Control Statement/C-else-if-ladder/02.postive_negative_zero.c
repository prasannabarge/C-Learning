#include <stdio.h>

int main() {
    int n = 10;
    printf("Number = %d \n", n);
    // Check if the number is positive, negative, or zero
    if (n > 0) {
        printf("Positive.\n");
    } else if (n < 0) {
        printf("Negative.\n");
    } else {
        printf("Zero.\n");
    }

    return 0;
}