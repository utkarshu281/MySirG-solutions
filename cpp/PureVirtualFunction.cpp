#include<iostream>
using namespace std;
class A{
    private:
        int a,b;
    public:
        virtual void suck()=0;//pure virtual func or abstract method
        void display(){
            cout<<"hello"<<endl;
        }
};
class Dummy:public A{
    public:
        void suck(){
            cout<<"overidden function of virtual function";
        }
};
int main(void){
    //A obj; cannot create object of abstract class
    Dummy b;
    b.suck();
    A *test=new Dummy;
    test->suck();
    return 0;
}