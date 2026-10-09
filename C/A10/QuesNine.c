#include<stdio.h>

int main(void){
    int num, count = 0, temp, arm = 0, var, original;
    printf("enter armstrong number:");
    scanf("%d", &num);

    if (num == 0) {
        printf("\n0 is an armstrong number");
        return 0;
    }

    int y = num;
    original = num;

    while(y > 0){
        y = y / 10;
        count++;
    }

    while(num > 0){
        temp = num % 10;
        var = 1;

        for(int i = 0; i < count; i++){
            var = var * temp;
        }

        arm = arm + var;
        num = num / 10;
    }

    if(original == arm){
        printf("\n%d is an armstrong number", original);
    }else{
        printf("\n%d is not an armstrong number", original);
    }

    return 0;
}