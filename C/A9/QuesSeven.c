#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int input=n;
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("the number of digits in your input %d is %d",input,count);
    return 0;

}