#include <iostream>
using namespace std;
//in stricuct by default all members are public 
struct Book{
    private:
        int id;
        char title[20];
        float price;
    public:
        void display(){
            cout<<id<<" "<<title<<" "<<price<<endl;
        }
        void inputBook(){
            cout<<"enter the properties of books(id,title,price):";
            cin>>id;
            cin.ignore();
            cin.getline(title,20);
            cin>>price;
            cin.ignore();
        }
};
class Employee{
    int id;
    char name[20];
    float salary;
};
int main() {
    Book b1;
    //b1.price=0; we can't be accessed cuz this is private 
    b1.inputBook();
    b1.display();
    Employee e1;
    //e1.id=6; will cuause error ccuz in class by default members are private
    return 0;
}
