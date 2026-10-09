#include<stdio.h>
void decimal_to_binary(int);
void decimal_to_binary(int n){
    int zero=0;
    int one=1;
    if(n>1){
        decimal_to_binary(n/2);
        if(n%2==0){
            printf("%d",zero);
        }else{
            printf("%d",one);   
        }
    }else{
        printf("%d",one);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    decimal_to_binary(n);
    return 0;
}