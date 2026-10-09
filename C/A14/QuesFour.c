#include<stdio.h>
void printing(int n);
void printing(int n){
    if(n>=0){
        printing(n-1);
        printf("%d",n); 
    }
}
int main(){
    return 0;
}