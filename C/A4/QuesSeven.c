#include<stdio.h>
int main(void) {
  int num;
  scanf("%d",&num);
  int last_num=num%10;
  int remaining_num=num/10;
  last_num=last_num*100;
  int roatated_number=last_num+remaining_num;
  printf("roatated_number is %d",roatated_number);
  return 0;
}
