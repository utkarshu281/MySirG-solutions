#include<fstream>
#include<iostream>
using namespace std;
class Book
{
    private:
        int id;
        char title[20];
        float price;
    public:
        void display(){
            cout<<"Book id is "<<id<<" the title of book is "<<title<<" and the price of book is "<<price<<endl;
        }
        void inputData(){
            cout<<"enter book id:";
            cin>>id;
            if(id<0){
                id=-id;
            }
            cin.ignore();
            cout<<"Title of The Book:";
            cin.getline(title,20);
            cout<<"Price of the Book:";
            cin>>price;
        }
        void store();
        void viewAllBooks();

};
void Book::viewAllBooks(){
    ifstream fin;
    fin.open("bookFile.dat",ios::in);
    if(!fin){
        cout<<"file does exist";
    }else{
        //kiss object m data lakhe rakhna h, kitna data rakhna hai
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof()){
            this->display();//for displaying details for current object
            fin.read((char*)this,sizeof(*this));
        }
    }
    fin.close();
}
void Book::store(){
    ofstream fout;
    //opening file in more than two modes
    //it's better to open a file in binary mode data is not simpily text
    fout.open("bookFile.dat",ios::app|ios::binary);
    //address of data and sizeOfdata
    fout.write((char*)this,sizeof(*this));
    /**
     *this->gives the actual data stored in object
     */
    fout.close();
}
int menu(){
    cout<<"\n1.Store all Book Records";
    cout<<"\n2.view All Book Records";
    cout<<"\n3.Exit";
    cout<<"\n Enter Your Choice:";
    int choice;
    cin>>choice;
    return choice;
}
int main(void)
{
    Book b;
    while(true){
        switch (menu())
        {
            case 1:
                b.inputData();
                b.store();
                break;
            case 2:
                b.viewAllBooks();
                break;
            case 3:
                cout<<"thank you"<<endl;
                exit(0);//from program
            default:
                cout<<"invalid hai input";
                break;
        }
    }
    return 0;
}