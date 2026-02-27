#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++){
        int result = num * i;
        printf("%d x %d = %d\n", num, i, result);
    }
    // Use a for loop from 1 to 10
    // For each iteration, print: num x i = result
    // Example: "5 x 1 = 5"

    return 0;
}