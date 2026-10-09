#include<stdio.h>
int sum(int);
int sum(int n){
    if(n==0){
        return 0;
    }
    if(n%2==0){
        return n+sum(n-1);
    }else{
       return sum(n-1);
    }
}
int main(){
    int n,value;
    scanf("%d",&n);
    value=sum(n);
    printf("%d",value);
    return 0;
}