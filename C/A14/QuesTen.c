#include<stdio.h>
int primeFactors(int);
int prime(int i);
int prime(int i){
    int is_prime=1;
    for(int j=2;j<i;j++){
        if(i%j==0){
            is_prime=0;
            break;
        }
    }
    if(prime)
        return 1;
    else
        return 0;
}
int primeFactors(int num){
    int j=0,quotient,flag=0;
    for(int i=2;i<=num;){
        flag=0;
        if(j!=i){
         j=prime(i);
         j=i;
        }
        if(j){ //non zero and positive number are considered true
            if(num%i==0){
                num=num/i;
                printf("%d,",i);
                if(num==1)
                    break;
            }else{
                flag=1;
            }
         }
        if(flag){
            i++;
        }
    }
    
}
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    primeFactors(x);
    return 0;
}