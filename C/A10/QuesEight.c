//next prime number after a given number 
#include<stdio.h>
int main(void){
    int x,is_prime,y;
    printf("enter a number:");
    scanf("%d",&x);
    y=x+1;
    while(1){ 
        for(int i=2;i<y;i++){
            is_prime=1;
            if(y%i==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime){
            printf("next prime number after %d is %d",x,y);
            break;
        }
        y++;
    }
    return 0;
}
