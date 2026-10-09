//ques:-first n terms of fibonacci series
#include<stdio.h>
int main(void)
{
    int a=0,b=1,c,n,i=3;//counting 0 as first term
    printf("enter a number for fibonacci sequence:");
    scanf("%d",&n);
    printf("%d %d",a,b);
    while(i<=n){
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
        i++;
    }
    printf("\n");
    return 0;
}