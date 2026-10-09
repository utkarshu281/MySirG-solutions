#include<stdio.h>
int main(void)
{
    int a=0,b=1,c,n,i=3;//counting 0 as first term
    printf("enter a number for fibonacci sequence:");
    scanf("%d",&n);
    while(i<=n){
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    printf("%dth term for fibonacci sequence is %d",n,c);
    printf("\n");
    return 0;
}