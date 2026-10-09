#include<stdio.h>
void positiveOrNegative(void); //declaring a function prototype
int main(){
 int x,y;
 x=5;
 y=6;
 printf("old x %d and old y %d \n",x,y);
 x=x+y;
 y=x-y;
 x=x-y;
 printf("new x %d and new y %d \n",x,y);
 positiveOrNegative(); //we can declare it above main to avoid implicit declare warning
 return 0;
}
void positiveOrNegative(void){
    int x;	
    printf("enter a number to check if it is positive or negative:");
    scanf("%d",&x);/*
    if(x>0){
    	printf("positive");
    }else{
    	printf("non positive");
    }*/
    x>0?printf("Positive"):printf("Negative");
}
