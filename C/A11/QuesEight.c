#include<stdio.h>
int main(){
    int num=0;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            num+=1;
            printf("%d ",num);
        }
        printf("\n");
    }
}