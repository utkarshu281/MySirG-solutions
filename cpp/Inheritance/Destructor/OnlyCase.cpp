/*
call order-> ~B() then ~A()
execution order--> ~B() then ~A()
*/
class A{
    public:
        ~A(){}
};
class B:public A
{
    public:
        ~B(){
            //b destructor will implicitly call the A destructor
        }

};