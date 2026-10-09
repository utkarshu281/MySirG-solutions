
#include <stdio.h>
int main() {
    float p,r,t,si;
    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the annual interest rate: ");
    scanf("%f", &r);

    printf("Enter the time period in years: ");
    scanf("%f", &t);
    si = (p*r*t)/ 100;
    printf("\nSimple Interest = %.2f\n", si);

    return 0;
}





