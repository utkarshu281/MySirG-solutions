#include<stdio.h>
#include<string.h>
int main(void){
  char buffer[20];
  int i;
  printf("enter your name:");
  fgets(buffer,20,stdin);
  /*for(i=0;buffer[i];i++);
  printf("%d\n",i);
  printf("last character is %d\n",buffer[i]);
  //i-1 becuase during loop i become 8
  buffer[i-1]='\0'; //replacing \n character with null character
   printf("length of %s is %d\n",buffer,i);
  for(i=0;buffer[i];i++);*/ //for calculating new length                    //
  //we can write avbove code for length and rplacing \n with the help of strlen
  //for(i=0;buffer[i];i++); //for calculating new length
  

  buffer[strlen(buffer)-1]='\0'; //removing \n
  i = strlen(buffer); //for calculating length
  printf("length of %s is %d\n",buffer,i);
  return 0;
}
