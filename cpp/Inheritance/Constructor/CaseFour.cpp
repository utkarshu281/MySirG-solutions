/*
when class A has an explicit parameterized constructor and no constructor with zero 
arguements. class B has an explicit constructor but call to parent class constructor 
is not explicitly written*/
class A{
    private:
        int a;
    public:
        A(int a){

        } 
};
class B:public A{
    public:
        //B(){}
        /* in above step compiler will see that you have created a constructor for B but haven't
        called the parent constructor. compiler will try to call default constructor through your 
        B constructor. but it will see you have parametrized constructor in A
        so when will you try to create obj of B compiler will throw error
        */
        
};