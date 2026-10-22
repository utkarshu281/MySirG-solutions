#include<iostream>
using namespace std;
class complexNumber{
    private:
        //instance(object) memeber variable
        int real;
        int imaginary;
    public:
        complexNumber(complexNumber &c){
            //copy contructor--->shallow copy
        }
        complexNumber(){}//default constructor
        complexNumber(int real, int imaginary):real(real),imaginary(imaginary)
        {}
        ~complexNumber(){

        }//destructor
        void display(){
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
        void set_real_imaginary(int x,int y){real=x;imaginary=y;}
        int get_real(){return real;}
        int get_imaginary(){return imaginary;}
        static void f1(){
            cout<<"does not belong to class";
        }
        complexNumber add(complexNumber c);
        complexNumber add2(complexNumber c);
        void adding(complexNumber c1,complexNumber c2);
        complexNumber operator+(complexNumber c1);
        complexNumber operator-(complexNumber c1);
        complexNumber operator-();//unary operator overloading

};
complexNumber complexNumber::operator-(){
    complexNumber temp;
    //since we haven't provided the values of temp real and imaginary what will be the value during subtraction
    temp.real=-real;
    temp.imaginary=-imaginary;
    return temp;
}
complexNumber complexNumber::add(complexNumber c){
    real+=c.get_real();
    imaginary+=c.get_imaginary();
    return *this; //return the copy of the object not the reference itself
}
complexNumber complexNumber::add2(complexNumber c){
    complexNumber temp;
    temp.real=real+c.get_real();
    temp.imaginary=imaginary+c.get_imaginary();
    return temp; //return the copy of the object not the reference itself
}
complexNumber complexNumber::operator+(complexNumber c){
    //naming function + with the help of operator overloading
    complexNumber temp;
    temp.real=real+c.get_real();
    temp.imaginary=imaginary+c.get_imaginary();
    return temp; //return the copy of the object not the reference itself
}
complexNumber complexNumber::operator-(complexNumber c){
    //naming function + with the help of operator overloading
    complexNumber temp;
    temp.real=real-c.real;
    temp.imaginary=imaginary-c.imaginary;
    return temp; //return the copy of the object not the reference itself
}
void complexNumber::adding(complexNumber c1,complexNumber c2){
    real=c1.get_real()+c2.get_real();
    imaginary=c1.get_imaginary()+c2.get_imaginary();
}
int main(void){
    complexNumber c1,c2,c3,c4,c5,c6;
    c1.set_real_imaginary(5,3);
    c2.set_real_imaginary(3,5);
    c3=c1.add(c2);
    c5=c1.add2(c2);
    //every class has three things 1)variables 2)function 3)operators
    //here oobject is calling operator by 2 ways 
    c5=c1+c2;c5=c1.operator+(c2);
    c6=c1-c2;
    //c1 will be awlays be caller object(left) and c2 will be an arguement(right)--->for binary operator overloading
    //another example
    cout<<"hello"; //can be writen as 
    cout.operator<<("hello");
    /*THIS IS OPERATOR OVERLOADING(COMPILE TIME POLYMOSPHISM)->OVERLOADING OPERATOR WITH DIFFERENT OPERATIONS
    3+4 int +int
    3.14 + 3.12 double+double
    c1+c2 complexNumber+complexNumber
    only those operators can be overloaded which were valid in c
    howevre there are many exceptions like
    1)sizeof()->reason?-decides at compiletime but execution of operator overloading happens at runtime
    2). member access operator
    3).* pointer to member operator
    4) ?: conditional operator
    5):: scope resolution operator
    */
    c4.adding(c1,c2);
    c6=-c2;//c6=c2.operator-();
    c3.display();
    c4.display();
    c5.display();
    
    return 0;
}
/*
Homework do operator overloading for this
1)>
2)==
3)!
4)*
5)[]
6)()
7)++--->post and pre
8)----->post and pre



*/