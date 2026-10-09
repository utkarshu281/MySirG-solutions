#include<stdio.h>
int main(void)
{
  int x,y;
  printf("enter two number to swap without variable and +,-:");
  scanf("%d%d",&x,&y);
  printf("old x %d and old y %d are\n",x,y);
  x=x*y;
  y=x/y;
  x=x/y;
  printf("New x %d and New y are %d",x,y);
  return 0;
}
