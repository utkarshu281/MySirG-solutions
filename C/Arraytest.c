#include<stdio.h>
int main(){
  char arr[10]={'B','H','O','P','A','L'};
  for(int i=0;i<=9;i++){
    if(arr[i]=='\0')
      printf("-");
    else 
      printf("%c",arr[i]);
    
  }
  printf("hello");
  printf("\n");
  return 0;
}

