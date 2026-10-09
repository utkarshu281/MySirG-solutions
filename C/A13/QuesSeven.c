#include <stdio.h>
int factorial(int);
int sum(int);
int sum(int n){
    if(n==1)
        return 1;
    return n+sum(n-1);
}
int factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int main() {
    int x,z;

    while (1) {
        printf("Enter a num: ");
        scanf("%d", &x);

        printf("\nChoose option\n"
               "1) Factorial of a number\n"
               "2) check even or odd\n"
               "3) Area of circle\n"
               "4) sum of first n natural numbers\n"
               "5) Exit\n"
               ">>> ");

        scanf("%d", &z);

        switch (z) {
            case 1:
                int n = factorial(x);
                printf("the factorial of your number %d is %d\n",x,n);
                break;

            case 2:
                printf("your number is %s\n",(x%2==0)?"even":"odd");
                break;

            case 3:
                float area = 3.14*x*x;
                printf("Area of circle from your given radious %d is %f\n",x,area);
                break;

            case 4:
                int summ=sum(x);
                printf("the sum of first %d natural number is %d\n",x,summ);
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