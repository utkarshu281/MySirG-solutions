#include<stdio.h>
int main(void) {
    int os,coa,dbms,cn,c;
    scanf("%d%d%d%d%d",&os,&coa,&cn,&dbms,&c);
    if(os>=33 && os<=100){
        printf("Passed in os\n");
    }else{
        printf("failed in os\n");
    }
    if(c>=33 && c<=100){
        printf("Passed in c\n");
    }else{
        printf("failed in c\n");
    }if(coa>=33 && coa<=100){
        printf("Passed in coa\n");
    }else{
        printf("failed in coa\n");
    }if(cn>=33 && cn<=100){
        printf("Passed in cn\n");
    }else{
        printf("failed in cn\n");
    }if(dbms>=33 && dbms<=100){
        printf("Passed in dbms\n");
    }else{
        printf("failed in dbms\n");
    }
    return 0;
}