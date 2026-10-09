#include<stdio.h>
int main(){
    int ch=65,chx,var;
    chx=67;
    for(int i=1;i<=4;i++){
        var=chx;
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int k=1;k<=4-i+1;k++){
            printf("%c",ch);
            ch+=1;
        }
        for(int k=1;k<=4-i;k++){
            printf("%c",chx);
            chx-=1;
        }
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        ch=65;
        chx=var;
        chx-=1;
        printf("\n");
    }
    return 0;
}