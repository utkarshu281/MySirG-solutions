/*when a class contains non parameterized constructor(explicitly defined by programmer)
and no explicit constructor is defined in child class B
order of call B() the A()
order of execution A() then B()

*/
class A{
    public:
        A(){
           //created by programmer 
        }
};
class B:public A{
    public:
        /**if we do not create constru.
         * B():A(){}
         * compiler will do above step automatically
         * 
         */
};