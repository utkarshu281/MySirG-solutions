#include<stdio.h>
int main(void)
{
  int unit_digit;
  printf("Unit digit of a number:");
  scanf("%d",&unit_digit);
  printf("%d",unit_digit%10);
  return 0;
}
