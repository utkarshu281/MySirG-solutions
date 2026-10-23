/* when explicit parameteized constructor of A is provided by programmer and no explicit constructor
is provided for b
*/
class A{
    //note:- there is no constructor in class A ehich takes no argument
    private:
        int a;
    public:
        A(int a){}
}; 
class B:public A{
    public:
    /*when we will try to create obj of B class then the constructor will create a 
    default constructor of B and will try to also call default constructor of A() but
    since theere is no default constructor and we are not passing argument. 
    it will give error while creating obj  */

    /*Note:- yadi parent class m non parametrized costructor hai hi nhi toh 
    ye compulsary hai ki chiuld class m programmer construtor banaye sath hi 
    parent class k constructor ko call karne ka kaam bhi kare */

} ;