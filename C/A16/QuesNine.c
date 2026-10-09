//deciumal to octal
#include<stdio.h>
void decimal_to_octal(int,int);
int padding_binary(int);
int padding_binary(int n){
    int original =n,count=0;
    int min=3,min_zero_to_add;
    while(n>0){
        n=n/10;
        count++;
    }
    if(min>count){
         min_zero_to_add = min-count;
    }else{
        if(count%2==0){
            while(count%2==0){
                count++;
            }
        }
        min_zero_to_add=count
    }
    return min_zero_to_add;
}
void decimal_to_octal(int n, int padding_number){
    
}
int main(){
    int n,padding;
    scanf("%d",&n);
    padding=padding_binary(n);

    return 1;
}