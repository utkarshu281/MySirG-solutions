#include<iostream>
using namespace std;
class ObjectPointer{
    private:
        int a,b;
    public:
        void setData(int a, int b){
            this->a=a;
            this->b=b;
        }
        void showData(){ 
            cout<<"a is "<<a<<" and b is "<<b<<endl;
        }
        ObjectPointer greater(ObjectPointer *p);
};
ObjectPointer ObjectPointer::greater(ObjectPointer *p){
    int sumOfP = (p->a)+(p->b);
    int sumOfThis = (this->a)+(this->b);
    if(sumOfThis>sumOfP)return *this;
    return *p;
}
int main(void){
    ObjectPointer i1,i2,i3;
    i1.setData(3,4);
    i2.setData(10,7);
    i3=i1.greater(&i2);
    i3.showData();
    return 0;
}