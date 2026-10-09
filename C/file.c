#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *fp;
  fp=fopen("ABC.txt","w");
  int a=10;
  clrscr()
    printf("%d",a);
    fprint(fp,"a=%d",a);
    fclose(fp);
    getch();

  return 0;
}
