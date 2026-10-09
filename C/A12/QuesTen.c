#include<stdio.h>
int main(){
     int num1=65,var=0,num2=67;
    for(int i=0;i<=3;i++){
        num2-=var;
        for(int j=1;j<=4-i;j++){
            printf("%c",num1);
            num1+=1;
        }
        for(int k=1;k<=2*i-1;k++){
            printf(" ");
        }
        if(i==0){
            printf("%c%c%c",num2,num2-1,num2-2);
        }else{
            var+=1;
            for(int p=1;p<=4-i;p++){
                printf("%c",num2);
                num2-=1;
            }
        }
        num1=65,num2=67;
        printf("\n");
    }
    return 0;
}