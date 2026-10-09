#include<stdio.h>
int main(){
    int ch=65;
    for(int i=0;i<=3;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=7-2*i;k++){
            printf("%c",ch);
            ch+=1;
        }
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        ch=65;
        printf("\n");
    }
    return 0;
}