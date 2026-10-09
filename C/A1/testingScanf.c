#include<stdio.h>
int main(){
  printf("enter something:");
  int x;
  char word;
  scanf("%d",&x);
  printf("eneter something");
  scanf("%c",&word);
  //scanf(" %c",&word); this will skip whitespaces
  printf("\nworked succesfully %d and %c",x,word);
}
