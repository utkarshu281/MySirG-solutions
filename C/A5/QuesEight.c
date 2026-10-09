#include<stdio.h>
int main(void)
{
  int a,b,c;
  printf("Your equations is ax^2+bx+c=0\n");
  printf("enter a, b and c for equation to find out root nature:");
  scanf("%d%d%d",&a,&b,&c);
  int D = b*b-4*a*c;
  if(D>0)
    printf("Two real and distinct roots");
  else if(D==0)
    printf("real and equal root");
  else if(D<0)
    printf("imaginary roots");
  else
    printf("just in case");
  return 0;
}
