class A{
    private:
        int a;
    public:
        A(int a){}
};
class B:public A{
    public:
        B():A(5)
        {}
};