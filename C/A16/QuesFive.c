#include<stdio.h>
void printing(int n);
void printing(int n){
    if(n>0){
         printing(n-1);
        if(n%2==0){
            printf("%d ",n);
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printing(n);
    return 0;
}