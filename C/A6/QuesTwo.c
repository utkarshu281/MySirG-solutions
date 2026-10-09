#include<stdio.h>
int main(void) {
    int cp,sp;
    scanf("%d%d",&sp,&cp);
    if(sp>cp){
        int profit=sp-cp;
        float profit_percentage=(profit/(float)cp)*100;
        printf("profit percentage is %f",profit_percentage);
        return 0;
    }else if(sp==cp){
        printf("no profit no loss");
        return 0;
    }
    int loss=cp-sp;
    float loss_percentage=(loss/(float)cp)*100;
    printf("loss percenatge is %f",loss_percentage);
    return 0;
}