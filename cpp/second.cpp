#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;//bad practice in c++
struct Book{
    int id;
    char title[20];
    float price;
};
struct Book input();
void display(struct Book vi);
struct Book input(){
    struct Book y;
    printf("Enter the values of book(id,price,title):");
    /*scanf("%d",&y.id);
    fflush(stdin);
    fgets(y.title,20,stdin);
    cin>>y.price;
    y.title[strlen(y.title)-1]='\0';
   // fflush(stdin);*/
   cin>>y.id;
   cin.ignore();//eats exactly one character left in buffer which was \n
   cin.getline(y.title,20);//read the whole line and eats \n
   cin>>y.price;
    
    return y;
}
void display(struct Book vi){
    printf("the values of structure are:\n");
    printf("the id %d and the price %f and title is %s",vi.id,vi.price,vi.title);
}
int main(){
    struct Book vi;
    vi=input();
    display(vi);
    return 0;
}