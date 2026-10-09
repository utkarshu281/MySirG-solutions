#include<stdio.h>
int main(void) {
    int month;
    scanf("%d",&month);
    if(month>0){
        printf("Not considering leap year\n");
        if(month<8){
            if(month%2==0 && month!=2){
                printf("30 days\n");
            }else if(month==2){
                printf("28 days\n");
            }else{
                printf("31 days\n");
            }
        }else if(month>=8 && month<=12){
            if(month%2==0){
                printf("31 days\n");
            }else{
                printf("30 days\n");
            }
        }else{
            printf("Invalid input\n");
        }
    }else{
        printf("Invalid\n");
    }
    return 0;
}