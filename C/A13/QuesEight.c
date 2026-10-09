//num of day unique msg
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    switch((int)ch){
        case 60 ... 90:
            printf("upper alphabet");
            break;
        case 97 ... 122:
            printf("lower alphabet");
            break;
        case 0 ... 59:
        case 123 ... 255:
            printf("special character");
            break;
        default:
            printf("invalid");
    }
    return 0;
}