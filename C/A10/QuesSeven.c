#include<stdio.h>
int main(void){
    int x,y,is_prime;
    printf("enter two numbers:");
    scanf("%d,%d",&x,&y);
    for(int i=x+1;i<y;i++){
        is_prime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime){
            printf("%d ",i);
        }
    }
    return 0;
}