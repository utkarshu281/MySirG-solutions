#include<stdio.h>
int sum_of_square(int);
int sum_of_square(int n){
    int square;
    if(n==0){
        return 0;
    }
     square=n*n;
     return square+sum_of_square(n-1);
}
int main(){
    int n,value;
    scanf("%d",&n);
    value=sum_of_square(n);
    printf("%d",value);
    return 0;
}
