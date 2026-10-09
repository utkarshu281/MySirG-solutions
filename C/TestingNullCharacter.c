#include<stdio.h>
int main(void)
{
  char buffer[20];
  printf("enter a name:");
  //fgets(buffer,10,stdin);
  gets(buffer);
  printf("%s",buffer);
  return 0;
}
