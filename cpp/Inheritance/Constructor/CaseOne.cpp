#include<iostream>
using namespace std;
/**when no explicit constructor is defined in a and b by programmer 
 * order of construction call is B() then A() but execution order will be
 * A() then B()
 * 
 * 
*/
class A{
/* when no constructor is created compiler while constructor for a and b and will implicitly call 
a constructor too*/
    public:
        //A(){}

};
class B:public A
{
    public:
        //B():A(){} calling A constructor using initializing list-->compiler will do automatically

};