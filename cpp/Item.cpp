#include<iostream>
using namespace std;
class Item{
    private:
        int x,y;//instance member variabale variable 
        static int k; //class variable/ static memeber variable
        void f1(); // not an inline function
    public:
        void set_x(int a){x=a;}
        void set_y(int b){y=b;}
        int get_x(){return x;}
        int get_y(){return y;}
        static void set_k(int m){k=m;}
        static int get_k(){return k;}
    };
int Item::k;//defining staic memeber variable
void Item::f1(){ //requesting compiler to not make it inline function 
    cout<<"not an inline function"<<endl;
}
int main(){
     Item i1,i2;
    // i1.k=10;
    // cout<<i2.k<<endl;
    // //accessing static variable through class
    // Item::k=20;
    // cout<<Item::k<<endl;
    i1.set_x(5);
    i1.set_y(3);
    Item::set_k(67);
    cout<<"K: "<<Item::get_k()<<endl;
    cout<<"X: "<<i1.get_x()<<endl;
    cout<<"Y: "<<i1.get_y()<<endl;
    return 0;
}