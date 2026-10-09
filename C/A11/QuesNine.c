#include<stdio.h>
int main(){
    int ch=65,num=0;
    for(int i=1;i<=5;i++){
        ch=ch+num;
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int k=1;k<=5-i+1;k++){
            printf("%c",ch);
            ch=ch+1;
        }
        ch=65,num++;
        printf("\n");
    }
    return 0;
}