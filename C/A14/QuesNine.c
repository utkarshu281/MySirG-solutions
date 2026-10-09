#include<stdio.h>
int contains(int ,int);
int contains(int num,int digit){
    int flag=0,var;
    while(num>0){
        var=num%10;
        if(var==digit)return 1;
        num=num/10;
    }
    return 0;
}
int main(){
    return 0;
}