#include <stdio.h>

int main(void) {

    char input;

    printf("Enter a character: ");
    scanf(" %c", &input);

    if (input >= 'a' && input <= 'z') {
        for (char c = input; c <= 'z'; c += 2) {
            printf("%c ", c);
        }
    } else if (input >= 'A' && input <= 'Z') {
        for (char c = 'Z'; c >= input; c--) {
            printf("%c ", c);
        }
    } else if (input >= '0' && input <= '9') {
        for (char c = '0'; c <= input; c++) {
            printf("%c ", c);
        }
    } else {
        printf("Invalid Input");
        return 0;
    }

    printf("\n");

    return 0;
}