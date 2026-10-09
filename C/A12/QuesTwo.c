#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
         if(i==4)break;
        for(int j=1;j<=i;j++){
            printf("-");
        }
        for(int k=1;k<=7-2*i;k++){
            printf("*");
        }
        for(int j=1;j<=i;j++){
            printf("-");
        }
        printf("\n");
    }
}