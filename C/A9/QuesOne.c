#include<stdio.h>
int main(void){
    int n,var=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        var+=i;
    }
    printf("sum of %d natural number is %d",n,var);
    return 0;

}