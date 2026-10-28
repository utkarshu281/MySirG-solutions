#include<fstream>
#include<iostream>
using namespace std;
void writing(){
    ofstream fout;
    fout.open("file1.txt",ios::out);
    char str[]="my name is utkarsh upadhyay";
    fout<<str;
    fout.close();
}
void reading(){
    ifstream fin;
    //char str[100];
    char ch;
    fin.open("file1.txt",ios::in);
    if(!fin)
        cout<<"file not found";
    else{
        //fin>>ch;
        fin.seekg(9);//chnging position of pointer to 10th character 
        ch=fin.get();
        while(!fin.eof()){
           // cout<<ch;
           //fin>>ch; will leave spaces
           cout<<ch<<fin.tellg()<<endl;//tells where the g pointer currently is  
           ch=fin.get();//getting a character
           
        }
      //  fin.getline(str,100);
        //cout<<str;
    }
    fin.close();
}
void append(char data[]){
    ofstream fout;
    fout.open("file1.txt",ios::app);
    fout<<"\n";
    fout<<data;
    fout.close();
}
int main(void){
    char str[]="file handling in c++ is kinda easy than java";
    //writing();
    //append(str);
    reading();
    cout<<endl; 
    return 0;
}
/*
some methods you should actually study about
1) tellg() and tellp()
2) seekg() and seekp()
*/