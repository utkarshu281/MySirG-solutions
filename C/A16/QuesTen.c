#include<stdio.h>
void reverseNum(int);
void reverseNum(int n){
    int i;
    int rm = n/10;
    i=n%10;
    if(i>0){
        printf("%d",i);
        reverseNum(rm);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    reverseNum(n);
    return 0;
}