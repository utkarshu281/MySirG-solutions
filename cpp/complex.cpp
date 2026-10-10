#include<iostream>
using namespace std;
class complexNumber{
    private:
        //instance(object) memeber variable
        int real;
        int imaginary;
    public:
        void display(){
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
        void input(int r,int i){
            real=r;
            imaginary=i;
        }
        static void f1(){
            cout<<"does not belong to class";
        }
};
int main(void){
    complexNumber c;
    c.input(3,4);
    c.display();
    return 0;
}