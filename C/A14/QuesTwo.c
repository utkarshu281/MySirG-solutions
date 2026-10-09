#include<stdio.h>
float SimpleInterest(int ,int , int );
float SimpleInterest(int p, int r, int t){
    float si = (float)(p*r*t)/100;
    return si;
}
int main(){
    return 0;
}