#include<stdio.h>
int main(void)
{
    int x; long long var=0;
    for(;;){
        scanf("%d",&x);
        if(x==0) break;
        var+=x;
    }
    printf("sum of all the numbers you entered is %lld",var);
    return 0;
}