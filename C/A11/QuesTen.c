#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        if(i==1||i==5){
            for(int j=1;j<=5;j++){
                printf("*");
            }
            printf("\n");
        }else{
            printf("*");
            for(int j=1;j<=3;j++){
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}