#include<stdio.h>
int main(void)
{
  int x,y;
  printf("swapping variables without using arithmatic exp and variable:");
  scanf("%d%d",&x,&y);
  printf("old x is %d and old y is %d\n",x,y);
  x=x|y;
  y=x^y;
  x=y^x;
  printf("new x is %d and new y is %d",x,y);
  return 0;
}
