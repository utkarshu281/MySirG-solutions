//numberof month input and display month
#include<stdio.h>
int main()
{
    int x;
    printf("enter an input:");
    scanf("%d",&x);
    switch(x){
        case 1:
            printf("January");
            break;
        case 2:
            printf("feb");
            break;
        case 3:
            printf("march");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("may");
            break;
        case 6:
            printf("june");
            break;
        case 7:
            printf("july");
            break;
        case 8:
            printf("august");
            break;
        case 9:
            printf("spet");
            break;
        case 10:
            printf("oct");
            break;
        case 11:
            printf("nov");
            break;
        case 12:
            printf("december");
            break;
        default:
            printf("invalid");
    }
    return 0;
}