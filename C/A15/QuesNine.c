#include<stdio.h>
void armstrong(int n, int m);
void armstrong(int n,int m){
    int original,count,y,arm=0,temp=1,value,var;
    while(n<=m){
        original=n;//153
        y=n;//153
        while(y>0){
            y=y/10;//15,1,0
            count++;//1,2,3
        }
        while(n>0){
            value=n%10;//3,5,1
            var=value;//3,5.1
            for(int i=1;i<=count;i++){
                temp=temp*var;//3,9,27,5,25,125,1
            }
            arm=arm+temp;//27+125+1=153
            temp=1;
            n=n/10;
        }
        if(original==arm){
            printf("%d ",arm);
        }
        n=original;
        arm=0,count=0,temp=1,n++;

    }
        
}
int main(){
    int x,y;
    printf("enter a number:");
    scanf("%d,%d",&x,&y);
    armstrong(x,y);
    return 0;
}