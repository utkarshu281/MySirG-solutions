class A{
    public:
        int a;
        //user has created both constructor
        A(){}
        A(int a){}
};
class B:public A{
/*even if we don't creat a constructor in B
compiler will automatically do this in public
    B():A(){}
*/

};