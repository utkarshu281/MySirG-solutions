#include<stdio.h>
int main(){
  int day,month,year;
  printf("Input date DD/MM/YY");
  scanf("%d/%d/%d",&day,&month,&year);
  printf("Day-%d ,Month-%d ,Year-%d",day,month,year);
  return 0;
}
