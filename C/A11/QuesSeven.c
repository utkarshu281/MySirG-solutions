#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        int ch=65;
        for(int k=1;k<i;k++)
            printf(" ");
        for(int j=1;j<=5-i+1;j++){
            printf("%c",ch);
            ch=ch+1;
        }
        printf("\n");
    }
    return 0;
}