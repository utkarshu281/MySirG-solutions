#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Person{
    private:
        int age;
        char name[20];
    protected:
        void setAge(int a){age=a;}
        void setName(char n[]){
            //name=n; find out why this is not allowed
            strcpy(name,n);
        }
    public:
        int getAge(){return age;}
        char* getName(){return name;}
};
class Employee:public Person{
    private:
       float salary;
    public:
        void setEmployee(int age, char name[],float s){
            setAge(age);
            setName(name);
            salary=s;
        }
};
int main(){
    Person p;
    Employee e;
    //e.setAge(8); why can't we access from here we can do this in java, e ios am employee object
    //is it becuase of main function?
    return 0;
}