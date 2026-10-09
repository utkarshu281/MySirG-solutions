#include<stdio.h>
int lcm(int a, int b);
int lcm(int a, int b){
    int l;
    for(l=a>b?a:b;l<=a*b;l++){
        if(l%a==0&&l%b==0){
            return l;
        }
    }
}
int main(){
    return 0;
}