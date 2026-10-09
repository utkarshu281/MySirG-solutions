#include<stdio.h>
int main(void) {
    int x;
    scanf("%d",&x);
    if(x>0)
        printf("positive");
    else if(x<0)
        printf("negative");
    else
        printf("zero");
    return 0;
}