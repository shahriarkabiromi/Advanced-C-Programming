#include <stdio.h>

// Function to check if a number is divisible by 5
int CheckThisNumber(int num) {
    if (num % 5 == 0) {
        return 1; // Number is divisible by 5
    } else {
        return 0; // Number is not divisible by 5
    }
}

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and check if the number is divisible by 5
    int result = CheckThisNumber(number);

    // Print the result based on the function's return value
    if (result == 1) {
        printf("The number is divisible by 5\n");
    } else {
        printf("The number is not divisible by 5\n");
    }

    return 0;
}
