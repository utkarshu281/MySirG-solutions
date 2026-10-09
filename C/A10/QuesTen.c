#include<stdio.h>
//armstrong numbers before 1000
int main(void){
    int num=1, count = 0, temp, arm = 0, var, original,y;
   while(num<1000){
         y = num;
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
            printf("%d ", original);
        }
        arm=0,var=1,count=0,num=original;
        num++;
        }
    return 0;
}