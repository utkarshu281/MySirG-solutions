#include<stdio.h>
int main(void){
  int x,y;
  printf("enter tow number to swap(use \",\" to seperate):");
  scanf("%d,%d",&x,&y);
  printf("Old x is %d and old y is %d\n",x,y);
  x=x+y;
  y=x-y;
  x=x-y;
  printf("new x is %d and new y is %d\n",x,y);
}
