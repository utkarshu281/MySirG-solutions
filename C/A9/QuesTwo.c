#include<stdio.h>
int main(void){
    int n,var=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(i%2==0)
            var+=i;
    }
    printf("sum of %d even natural number is %d",n,var);
    return 0;

}