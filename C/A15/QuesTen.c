#include<stdio.h>
int expression(int n);
int expression(int n){
    int sum=1,var=1;
    for(int i=1;i<=n-1;i++){
        var=var*i;
        sum=sum+var;
    }
    return sum;
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum=expression(n);
    printf("the sum of expression is %d",sum);
    return 0;
}