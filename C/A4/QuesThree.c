#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
bool numeric_checker(char buffer[10],char *ptr);
int main(void)
{
  int length;
  char buffer[10];
  char *ptr; //points to character of buffer--> i think starting 
  printf("enter something and find it's size in bytes:\n");
  bool is_char=true;
  if(fgets(buffer,sizeof(buffer),stdin)!=NULL){
    length = strlen(buffer);
    for(int i=0;i<length;i++){
      if(buffer[i]=='.' && !(buffer[i]>='a' && buffer[i]<='z' || buffer[i]>='A' && buffer[i]<='Z')) {
        if(buffer[length-2]=='f' || buffer[length-2]=='F'){
          printf("%ld it is a float\n",sizeof(float));
        }else{
          printf("%ld it is a double\n",sizeof(double));
        }
        return 0;
      }else if(!(buffer[i]>='a' && (buffer[i]<='z' || buffer[i]>='A' && buffer[i]<='Z'))){
          is_char=false;
      }else if (numeric_checker(buffer,&ptr)){
          printf("a integer datatype %ld",sizeof(int));
          return 0;
      }
    }
     if(is_char){
        if(length>2){
            printf("not a character a string i guess\n");
        }else{
            printf("a char datatype %ld\n",sizeof(char));
        }
        return 0;
    }else if(numeric_checker(buffer,&ptr)){
        printf("a int data type %ld",sizeof(int));
        return 0;
    }

  }
  printf("different");
  return 0;
}
bool numeric_checker(char buffer[10],char *ptr)
{
  //long value=strtol(buffer,&ptr,10); convert string to int
  if(ptr==buffer){
    return false;
  }
  if(ptr!='\0' && ptr!='\n')return false;
  return true;
}
