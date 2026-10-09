#include<stdio.h>
int length(char *,int);
int sir_length(char *);
int length(char *p,int size){
    int len=0;
    for(int i=0;i<size;i++){
        if(*(p+i)=='\n')
            *(p+i)='\0';
        if(*(p+i)=='\0')
            break;
        len++;
    }
    return len;
}
int sir_length(char *p){
    int i;
    for(i=0;*(p+i);i++);
    return i;
}
int main(){
    int L;
    char buffer[10];
    printf("enter the values of String:");
    fgets(buffer,10,stdin);
    //L=length(buffer,10);
    L=sir_length(buffer);
    printf("Length of String is %d",L);
    return 0;
}