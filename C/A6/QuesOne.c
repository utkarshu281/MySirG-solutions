#include<stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    if(x>=100 && x<1000)
        printf("Three digit number");
    else
        printf("not a three didigt number");
    return 0;
}