#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int is_prime=1; //true
    for(int i=2;i<=n;i++){
        for(int j=2;j<i;j++){
            if(n%j==0){
                is_prime=0;
                break;
            }
        }
        if(!is_prime)
            break;
    }
    if(is_prime==1){
        printf("your number %d is a prime number",n);
    }else{
        printf("your number %d is not a prime number",n);
    }
    return 0;
}