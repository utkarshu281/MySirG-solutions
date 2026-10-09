#include<stdio.h>
int main(void) {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0){
        if(a+b>c && a+c>b && b+a>c){
            printf("triangle is valid\n");
        }else
            printf("Not valid\n");
    }else
        printf("not a valid input\n");
    return 0;
}