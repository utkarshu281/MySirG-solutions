#include<stdio.h>
int prime(int a);
int prime(int a){
    int flag=1;
    for(int i=2;i<a;i++){
        if(a%i==0){
            flag=0;
        }
    }
    if(flag){
        return 1; 
    }
    return 0;
}
int nextPrime(int n){
    int next=n+1;
    while(1){
        if(prime(next)){
            return next;
        }else{
            next++;
        }
    }
}
int main(){
    return 0;
}