#include<stdio.h>
int main(void){
    int n;
    int reverse=0;
    scanf("%d",&n);
    int count=0;
    int i;
    while(n!=0){
        i=n%10;
        reverse=reverse*10+i;
        n=n/10;
    }
    printf("your rversed number is %d\n",reverse);
    return 0;
}