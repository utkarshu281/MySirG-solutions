#include<stdio.h>
int sum(int);
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    int n,value;
    scanf("%d",&n);
    value=sum(n);
    printf("%d",value);
    return 0;
}