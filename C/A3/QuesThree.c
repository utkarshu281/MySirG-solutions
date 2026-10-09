#include<stdio.h>
#include<string.h>
int main(void){
  //this program only considers one character even if you type anything
  char x[20];
  printf("enter a character:");
  if(fgets(x,sizeof(x),stdin)!=NULL)
  {
    if(strlen(x)==2)
    {
      printf("%c",++x[0]);
    }else {
      printf("invalid");
    }
  }
  return 0;
}
