#include<iostream>
using namespace std;
class FriendFunction{
    private:
        int a; int b;
    public:
        FriendFunction(int x, int y):a(x),b(y)
        {}
        FriendFunction(){}
        void showData(){
            cout<<"a= "<<a<<" b= "<<b<<endl;
        }
        friend FriendFunction operator+(int,FriendFunction);
        friend FriendFunction operator-(FriendFunction f);
        friend FriendFunction operator+(FriendFunction f1,FriendFunction f2);
        friend void f1(FriendFunction);//declaring friend function
        friend istream& operator>>(istream&,FriendFunction&);
        friend ostream& operator<<(ostream&,FriendFunction);
};
ostream& operator<<(ostream &dout,FriendFunction i){
    dout<<i.a<<" "<<i.b;
    return dout;//returning for the condition of cascading
}
istream& operator>>(istream &din, FriendFunction &i){
    din>>i.a>>i.b; //how this work internally 
    return  din;//returning for the condition of cascading
}
FriendFunction operator+(int k, FriendFunction f){
    FriendFunction c;
    c.a=f.a+k;
    c.b=f.b;
    return c;
}
FriendFunction operator-(FriendFunction f){
    FriendFunction temp;
    temp.a=-f.a;
    temp.b=-f.b;
    return temp;
}
FriendFunction operator+(FriendFunction f1,FriendFunction f2){
    FriendFunction f;
    f.a=f2.a+f1.a;
    f.b=f2.b+f1.b;
    return f;
}
void f1(FriendFunction f1){
    int c;
    c=f1.a+f1.b;
    cout<<"sum is "<<c<<" from friend function"<<endl;
}
// void f2(FriendFunction f2){
//     int c;
//     c=f2.a+f2.b;
     
// } //f2 won't be able to access private memeber, since it is not a friend function
int main(){
    FriendFunction t1(2,3),t2(3,5),t3,t4,t5,i;
    f1(t1);//calling friend function
    t3=t1+t2;//i3=operator+(t1,t2);--friend function(that's why two arguement)
    t4=-t3;//t4=operator-(t3);-->friend function(that's why one argument is passed)
    t5=5+t4;//t5=operator+(5,t4)--->friend Function
    t3.showData();
    t4.showData();
    t5.showData();
    cout<<"Enter the values:";
    cin>>i;
    cout<<i;
    cout<<endl;
    ostream& x = cout;//x is an alias for cout 
    return 0;
}   