//num of day unique msg
#include<stdio.h>
int main()
{
    int x;
    printf("enter:");
    scanf("%d",&x);
    switch(x){
        case 0 ... 49:
            printf("grade F");
            break;
        case 50 ... 59:
            printf("grade E");
            break;
        case 60 ... 69:
            printf("grade D");
            break;
        case 70 ... 79:
            printf("grade C");
            break;
        case 80 ... 89:
            printf("grade B");
            break;
        case 90 ... 100:
            printf("grade A");
            break;
        default:
            printf("invalid");
    }
    return 0;
}