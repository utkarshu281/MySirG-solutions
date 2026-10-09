#include<stdio.h>
int main(void) {
  int x,y,z;
  scanf("%d%d%d",&x,&y,&z);
  int highest=0;
  if(x>=y){
    if(x>=z)
      highest=x;
    else
      highest=z;
  }else if(y>=z)
    highest=y;
  else
    highest=z;
  printf("highest is %d",highest);
}
