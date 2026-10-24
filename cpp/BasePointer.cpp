#include<iostream>
using namespace std;
class A{
    public:
        virtual void f1(){
            cout<<"f1 is from a ";
        }
};
class B:public A{
    public:
        void f1(){
            cout<<"f1 from b"; // this function will also be virtual cuz oveeriding the virtual function 
            //which automatically makes it virtual function
        }
        void f2(){
            cout<<"f2 from b";
        }
};
int main(void){
    A *p= new B;//using dma, this can be written as
    /*A *x;
    B obj;
    x=&obj;
    x->f1();*/
    p->f1();//instead of calling function of b it will call function ofA due to early binding
    cout<<endl;
    return 0;
}