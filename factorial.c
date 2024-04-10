#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    // Prompt the user to enter a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the input is negative
    if (num < 0)
        printf("Error! Factorial of a negative number is undefined.");
    else {
        // Calculate factorial and display the result
        int result = factorial(num);
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}
