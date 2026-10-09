#include<stdio.h>
int main(){
    for(int i=0;i<=4;i++){
        for(int k=1;k<=i;k++){
            printf("-");
        }
        for(int j=0;j<=4-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}