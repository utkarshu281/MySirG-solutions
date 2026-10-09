#include <stdio.h>

int findLCM(int a, int b) {
    if (a == 0 || b == 0) return 0;
    int L;
    for (L = (a > b) ? a : b; L <= a * b; L++) {
        if (L % a == 0 && L % b == 0) {
            return L;
        }
    }
    return 0;
}

int sumOfDigits(int n) {
    int sum = 0;
    n = (n < 0) ? -n : n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int x, z;

    while (1) {
        printf("\nEnter a num: ");
        scanf("%d", &x);

        printf("\nChoose option\n"
               "1) LCM of two numbers\n"
               "2) sum of digits\n"
               "3) Area of circle\n"
               "4) num is prime or not\n"
               "5) Exit\n"
               ">>> ");

        scanf("%d", &z);

        switch (z) {
            case 1: {
                int a, b;
                printf("Enter first number: ");
                scanf("%d", &a);
                printf("Enter second number: ");
                scanf("%d", &b);
                int lcm = findLCM(a, b);
                printf("The LCM of %d and %d is %d\n", a, b, lcm);
                break;
            }

            case 2: {
                int sod = sumOfDigits(x);
                printf("The sum of digits of %d is %d\n", x, sod);
                break;
            }

            case 3: {
                float area = 3.14159f * x * x;
                printf("Area of circle from your given radius %d is %.2f\n", x, area);
                break;
            }

            case 4: {
                if (isPrime(x)) {
                    printf("%d is a prime number.\n", x);
                } else {
                    printf("%d is not a prime number.\n", x);
                }
                break;
            }

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