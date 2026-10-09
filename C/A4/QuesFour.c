#include<stdio.h>
int main(void)
{
  int x;
  printf("enter anumber:");
  scanf("%d",&x);
  x=(x/10)*10;
  printf("New number is %d",x);
  return 0;
}
