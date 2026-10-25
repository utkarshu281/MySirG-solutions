#include<iostream>
using namespace std;
int main(void){
    int a,b,c;
    try{
        cout<<"enter two numbers:";
        cin>>a>>b;
        if(b==0)
            throw 1;//throws  the exception to catch, we can pass object too
            /*throw nahi chalega toh catch walal block nhi chalega  */
        c=a/b;
        cout<<"the result is"<<c<<endl;

    }catch(int e){
        cout<<"run time exception"<<endl;
    }
    int x,y;
    cout<<"enter two numbers:";
    cin>>x>>y;
    int z=x+y;
    cout<<"sum of two numbers is "<<z<<endl;
    return 0;
}