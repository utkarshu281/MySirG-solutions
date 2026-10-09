//ques:- porime number before 100
#include<stdio.h>
int main(void){
    int is_prime;
    for(int i=2;i<100;i++){
        is_prime=1;
        for(int j=2;j<i;j++){
            if(i%j==0)
                is_prime=0;
        }
        if(is_prime)
            printf("%d ",i);
    }
    return 0;
}