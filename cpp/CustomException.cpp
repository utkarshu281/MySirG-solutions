#include<iostream>
#include<string>
using namespace std;
class DivideByZero:public exception
{
    //overirding a function from exception for custom exception
    public:
        const char* what() const throw()
        {
            return "divide by zero exception";
        }
};
int main(void){
    try{
        int a,b;
        cout<<"enter two numbers:";
        cin>>a>>b;
        if(b==0)
            throw new DivideByZero;
            //throw new DivideByZero()--> object use this DivideBySero&
            //instead of DivideByZero() use *(new divieby zero)
        int c=a/b;
        cout<<"The result form division is"<<c<<endl;
    }catch(DivideByZero* p){
        cout<<p->what();
    }catch(exception e){//base class for all exception

    }
    return 0;
}