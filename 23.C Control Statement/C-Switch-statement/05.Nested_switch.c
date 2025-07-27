#include <stdio.h>

int main() {
    int outerChoice = 1;
    int innerChoice = 2;

    // Outer switch to choose the category
    switch(outerChoice) {//==>it,s because outerchoice is 1
        case 1:
            printf("Category 1 selected\n");

            // Inner switch to choose the option under category 1
            switch(innerChoice) {
                case 1:
                    printf("Option 1 selected under Category 1\n");
                    break;
                case 2: //==> and inner choice is 2
                    printf("Option 2 selected under Category 1\n");
                    break;
                default:
                    printf("Invalid option under Category 1\n");
            }
            break;

        case 2:
            printf("Category 2 selected\n");

            // Inner switch to choose the option under category 2
            switch(innerChoice) {
                case 1:
                    printf("Option 1 selected under Category 2\n");
                    break;
                case 2:
                    printf("Option 2 selected under Category 2\n");
                    break;
                default:
                    printf("Invalid option under Category 2\n");
            }
            break;

        default:
            printf("Invalid category\n");
    }

    return 0;
}


//it takes the two outechoice and two innerchoice but only execute the outerchoice is selectee and innerchoice is selected like 1 case 1 and innerchoice case 2