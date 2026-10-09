#include<stdio.h>
int main(){
    for(int i=0;i<=4;i++){
        for(int k=4;k>=i;k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}