#include <stdio.h>

// User defined functions
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
int mod(int a, int b) { return a % b; }

int main() {
    int choice, a, b;

    while (1) {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting program...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", a, b, add(a, b));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n", a, b, sub(a, b));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n", a, b, mul(a, b));
                break;
            case 4:
                if (b != 0)
                    printf("Division of %d and %d is %d\n", a, b, divide(a, b));
                else
                    printf("Error: Division by zero!\n");
                break;
            case 5:
                if (b != 0)
                    printf("Modulo of %d and %d is %d\n", a, b, mod(a, b));
                else
                    printf("Error: Division by zero!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
