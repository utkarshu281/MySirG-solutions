//patern printing assignment 
#include<stdio.h>
int main(void){
    char star='*';
    for(int i=0;i<=4;i++){
        for(int j=0;j<=i;j++){
            printf("%c ",star);
        }
        printf("\n");
    }
    return 0;
}