#include <stdio.h>
#include <math.h>
#include <stdlib.h>

    float calculatePerimeter(float length, float width) {
        return 2 * (length + width);
    }
    
    float calculateArea(float length, float width) {
        return length * width;
    }

    float calculateDiagonal(float length, float width) {
        return sqrt(length * length + width * width);
    }

int main(void)
{
    float length, width;
    int invalidInputCount = 0;
    char choice;

    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the width: ");
    scanf("%f", &width);

    while (1) {
        printf("\nMenu:\n");
        printf("a. perimeter\n");
        printf("b. area\n");
        printf("c. diagonal\n");
        printf("d. exit\n");

        printf("\nChoose your letter: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("The perimeter is: %.3f\n", calculatePerimeter(length, width));
                break;
            case 'b':
                printf("The area is: %.3f\n", calculateArea(length, width));
                break;
            case 'c':
                printf("The length of the diagonal is: %.3f\n", calculateDiagonal(length, width));
                break;
            case 'd':
                printf("Have a nice day!\n");
                exit(0);
            default:
                printf("Invalid input. Please try again.\n");
                invalidInputCount++;
        }

        if (invalidInputCount >= 10) {
            printf("You have exceeded the maximum number of invalid inputs.\n");
            printf("Have a nice day!\n");
            break;
        }



    }

    return 0;
}