
#include<stdio.h>
int main() {
  int x;
  scanf("%d",&x);
  int y=x/2;
  int z=x-2*y; // Dividend-(Divisor*quotient)=remainder;
  if(z==0){
    printf("divisible by 2");
  }else{
    printf("not divisible by 2");
  }
}
