#include<stdio.h>
int main(){
  float radious;
  const float PI=3.14;
  printf("enter radious:");
  scanf("%f",&radious);
  printf("circumference of a circle is: %lf",2*PI*radious);
  return 0;
}
