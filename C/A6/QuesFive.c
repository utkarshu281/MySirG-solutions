#include<stdio.h>
int main(void) {
    int x;
    scanf("%d",&x);
    if(x%2==0 && x%3==0)
        printf("y");
    else
        printf("n");
    return 0;
}