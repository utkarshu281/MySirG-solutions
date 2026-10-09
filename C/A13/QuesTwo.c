#include <stdio.h>

int main() {
    int x, y, z;

    while (1) {
        printf("Enter two numbers: ");
        scanf("%d%d", &x, &y);

        printf("\nChoose option\n"
               "1) Addition\n"
               "2) Subtraction\n"
               "3) Multiplication\n"
               "4) Division\n"
               "5) Exit\n"
               ">>> ");

        scanf("%d", &z);

        switch (z) {
            case 1:
                printf("Addition of %d and %d is %d\n", x, y, x + y);
                break;

            case 2:
                printf("Subtraction of %d and %d is %d\n", x, y, x - y);
                break;

            case 3:
                printf("Multiplication of %d and %d is %d\n", x, y, x * y);
                break;

            case 4:
                if (y != 0)
                    printf("Division of %d and %d is %d\n", x, y, x / y);
                else
                    printf("Error: Division by zero\n");
                break;

            case 5:
                printf("Exiting program...\n");
                goto l1;

            default:
                printf("Invalid option\n");
        }
    } 

l1:
    return 0;
}