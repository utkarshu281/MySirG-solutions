#include<stdio.h>
int main(void){
    int n,var=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        var*=i;
    }
    printf("factorial of %d  is %d",n,var);
    return 0;

}