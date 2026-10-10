#include<stdio.h>
#include<iostream>
inline int square(int);
//int add(int, int, int=10);
float add(int,int);
float add(int n, int y){
    return (float)n+y;
}
int add(int a, int b, int c){
    return a+b+c;
}
int square(int n){
    return n*n;
}
int main(){
    int x,y,z;
    int p,q,r;
    std::cout<<"enter a number:";
    std::cin>>x;
    y=x*x;
    std::cout<<"the square of "<<x<<" is "<<y<<std::endl;
    z=square(x);
    std::cout<<"the square of "<<x<<" is "<<z<<std::endl;
    std::cout<<"enter two number:"<<std::endl;
    std::cin>>p>>q;
    std::cout<<"sum of two numbers is "<<add(p,q)<<std::endl;
    std::cout<<"enter three numbers:";
    std::cin>>p>>q>>r;
    std::cout<<"sum of three numbers is "<<add(p,q,r)<<std::endl;
    return 0;
}