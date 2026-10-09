#include<stdio.h>
void input(int a[],int n);
void display(int a[], int n);
void inputUsingPointer(int *p,int size);
void input(int a[],int n){
  for(int i=0;i<n;i++){
    printf("enter a value for array of size %d:",n);
    scanf("%d",&a[i]);
  }
}
void display(int *p,int size){
  printf("printing the values of array");
  for(int i=0;i<size;i++){
      printf("%d\n",*(p+i));
  }
}
void inputUsingPointer(int *p,int size){
  int i;
  printf("enter the size of %d:",size);
  for(int i=0;i<size;i++){
      scanf("%d",p+i);
  }
}
int main(){
  int a[10];
  //input(a,10);
  inputUsingPointer(a,10);
  display(a,10);
  printf("\n");
  return 0;
}
