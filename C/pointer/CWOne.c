#include<stdio.h>
void swap(int *p,int *q);
void swap(int *p, int *q){
  int temp;
  temp=*p;
  *p=*q;
  *q=temp;
}
int main(){
  int a,b;
  printf("enter two numbers:");
  scanf("%d %d",&a,&b);
  swap(&a,&b);
  printf("%d %d",a,b);
  return 0;
}
