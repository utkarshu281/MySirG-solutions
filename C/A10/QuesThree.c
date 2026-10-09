//ques3:- does number exist in fibonacci series or not
#include<stdio.h>
int main(void)
{
    int a=0,b=1,c,n,i=0,is_fibonacci=0;//counting 0 as first term
    printf("enter a number for fibonacci sequence:");
    scanf("%d",&n);
    while(i<=n){
        if(n==i){
            is_fibonacci=1;
            break; //break out of the loop
        }
        i=a+b;
        a=b;
        b=i;
    }
    if(is_fibonacci){
        printf("the number %d exist in fibonacci sequence",n);
    }else{
        printf("the number %d does not exist in fibonacci sequence",n);
    } 
    printf("\n");
    return 0;
}