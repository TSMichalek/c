#include <stdio.h>

int main() {
    int num = 7;

    // Check if positive, negative, or zero and print the result
    if (num > 0) {
        printf("%d is positive ", num);
    } else if (num < 0) {
        printf("%d is negative ", num);
    } else {
        printf("%d is neutral ", num);
    }
    // Then check if even or odd and print the result
    if (num % 2 == 0) {
        printf("and even.\n");
    } else {
        printf("and odd.\n");
    }
    return 0;
}