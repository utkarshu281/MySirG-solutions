#include<iostream>
using namespace std;
int main(void){
    int balance=5000,amt;
    if(amt > balance)
        throw 1;
    balance-=amt;
    cout<<"new Balance is"<<balance<<endl;
    return 0;
}