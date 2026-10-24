#include<iostream>
using namespace std;
class A{
    public:
        virtual void f1(){cout<<"f1 of A"<<endl;}
        virtual void f2(){cout<<"f2 of A"<<endl;}
         void f3(){cout<<"f3 of A"<<endl;}
         void f4(){cout<<"f1 of A"<<endl;}
         void f5(){cout<<"f5 of A"<<endl;}
};
class B:public A{
    public:
        void f1(){cout<<"f1 of b"<<endl;}
        void f3(){cout<<"f3 of b"<<endl;}
        void f5(){cout<<"f5 of b"<<endl;}
};
int main(void){
    A *p=new A;
    p->f1();//lb
    p->f2();//lb
    p->f3();//eb
    p->f4();//eb
    p->f5();//eb 
    delete p;
    p=new B;
     p->f1();//lb
    p->f2();//lb
    p->f3();//eb
    p->f4();//eb
    p->f5(); //eb
    return 0;
}