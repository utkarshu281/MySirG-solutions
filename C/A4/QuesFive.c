#include<stdio.h>
int main(void)
{
  int number, insert_num;
  printf("enter number and number you want to insert");
  scanf("%d%d",&number,&insert_num);
  number=number*10+insert_num;
  printf("the new number is %d",number);
  return 0;
}
