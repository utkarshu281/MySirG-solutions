#include<stdio.h>
int main(){
     int num1=1,var=0,num2=3;
    for(int i=0;i<=3;i++){
        num2-=var;
        for(int j=1;j<=4-i;j++){
            printf("%d",num1);
            num1+=1;
        }
        for(int k=1;k<=2*i-1;k++){
            printf(" ");
        }
        if(i==0){
            printf("%d%d%d",3,2,1);
        }else{
            var+=1;
            for(int p=1;p<=4-i;p++){
                printf("%d",num2);
                num2-=1;
            }
        }
        num1=1,num2=3;
        printf("\n");
    }
    return 0;
}