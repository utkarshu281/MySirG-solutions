#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(void)
{
  char x[20];
  printf("enter a real constant to find it's size:");
  //scanf("%c",x); // we do not need to write 7 for array
  fgets(x,sizeof(x),stdin);
  int length = strlen(x);
  //printf("length %d\n",length);
  //printf("last character%c\n",x[length-2]);
  bool is_real=false;
  for(int i=0;i<length;i++)
  {
    //verifying string
    if(x[i] == '.'){
      is_real=true;
    }
  }
  if(is_real)
  {
    //-2 instead of -1 because last character is \n
    if(x[length-2]=='f' || x[length-2]=='F') 
      printf("size is %ld",sizeof(float));
    else 
      printf("size is %ld",sizeof(double));
  }else {
    printf("Not a real constant");
  }
}
