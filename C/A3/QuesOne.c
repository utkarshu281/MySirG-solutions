#include<stdio.h>
#include<string.h>
int main(){
  char buffer[100];
  printf("enter a character to check size:");
  if(fgets(buffer,sizeof(buffer),stdin)!=NULL)
  {
    size_t size_of_buffer = strlen(buffer);
    //printf("%zu\n",size_of_buffer);
    if(size_of_buffer>2) // greater than 2 becuase one character will be newline/enter
      printf("input size is large");
    else
      printf("The size of character %s is %d bytes\n",buffer,sizeof(buffer[0]));
  }

return 0;
}
