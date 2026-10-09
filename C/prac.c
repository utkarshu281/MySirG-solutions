#include<stdio.h>
int main(){
    int x=1,input;
    printf("you have 3 chances,all input even won if odd lost:\n");
    while(x<=3){
        scanf("%d",&input);
        if(input%2!=0){
            printf("you lost\n");
            break;
        }
        if(x==3 && input%2==0)printf("You Won\n");
        x++;
    }

}