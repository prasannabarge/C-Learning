#include <stdio.h>

int main() {
    int var = 2;
    
    // switch case without break
    switch (var) {
    case 1:
        printf("Case 1 is executed.\n");
    case 2:
        printf("Case 2 is executed.\n");
    case 3:
        printf("Case 3 is executed.\n");
    case 4:
        printf("Case 4 is executed.\n");
    default:
        printf("Default case is executed.\n");
    }
    return 0;
}