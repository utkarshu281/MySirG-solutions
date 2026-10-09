#include<stdio.h>
int main(void)
{
  char buffer[20];
  printf("enter a string:");
  fgets(buffer,10,stdin);

  return 0;
}
