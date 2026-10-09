#include<stdio.h>
#include<iostream>
inline int square(int);
int add(int, int, int=10);
int add(int a, int b, int z){
    return a+b+c;
}
int square(int n){
    return n*n;
}
int main(){
    int x,y,z;
    std::cout<<"enter a number:";
    std::cin>>x;
    y=x*x;
    std::cout<<"the square of "<<x<<" is "<<y<<std::endl;
    z=square(x);
    std::cout<<"the square of "<<x<<" is "<<z;
    return 0;
}