#include<stdio.h>
int factorial(int n);
float arrangements(int n, int r);
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
float arrangements(int n, int r){
    int n_fact=factorial(n);
    int NandR_fact=factorial(n-r);
    float value = (float)n_fact/NandR_fact;
    return value;
}
int main(){
    return 0;
}   