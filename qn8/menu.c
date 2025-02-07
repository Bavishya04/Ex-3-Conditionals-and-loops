#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double number, result;

    // Display menu
    printf("Choose an operation:\n");
    printf("1. Square\n");
    printf("2. Cube\n");
    printf("3. Square Root\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Perform the operation based on the user's choice
    switch(choice) {
        case 1: // Square
            result = number * number;
            printf("The square of %.2lf is %.2lf\n", number, result);
            break;

        case 2: // Cube
            result = number * number * number;
            printf("The cube of %.2lf is %.2lf\n", number, result);
            break;

        case 3: // Square Root
            if (number < 0) {
                printf("Error: Cannot compute square root of a negative number.\n");
            } else {
                result = sqrt(number);
                printf("The square root of %.2lf is %.2lf\n", number, result);
            }
            break;

        default:
            printf("Invalid choice. Please select a valid option.\n");
    }

    return 0;
}

