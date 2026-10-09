#include<stdio.h>
int main(){
    for(int i=0;i<=3;i++){
        for(int j=1;j<=4-i;j++){
            printf("*");
        }
        for(int k=1;k<=2*i-1;k++){
            printf(" ");
        }
        if(i==0){
            printf("***");
        }else{
            for(int p=1;p<=4-i;p++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}