#include <stdio.h>

// Function to add two numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to subtract two numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

// Function to divide two numbers
double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

int main() {
    double num1, num2;
    
    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Calculate and display the results using the functions
    printf("Addition: %.2lf\n", add(num1, num2));
    printf("Subtraction: %.2lf\n", subtract(num1, num2));
    printf("Multiplication: %.2lf\n", multiply(num1, num2));
    printf("Division: %.2lf\n", divide(num1, num2));

    return 0;
}
