#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

char* to_upper_str(char n[]){
    for(int i=0;n[i];i++){
        if(n[i]>='a' && n[i]<='z'){
            n[i]-=32;
        }
    }
    return n;
}

int main(){
    int age,vote;
    string nationality;
    char continent[20];
    try{
        cout<<"enter your age(for vote):";
        cin>>age;
        if(age<18)
            throw 1;
        cin.ignore();                       // age ke baad ka '\n' (sirf ek baar)
        cout<<"enter your continent:";
        cin.getline(continent,20);          // yahan koi extra ignore nahi
        if(!strcmp(to_upper_str(continent),"ASIAN")){
            throw continent;
        }
        cout<<"enter your nationality:";
        cin>>nationality;
        transform(nationality.begin(), nationality.end(), nationality.begin(),
                  [](unsigned char c){ return toupper(c); });
        if(nationality=="INDIAN")
            throw nationality;

        cout<<"cast your vote for fav actor";
        cout<<"\n1.jhonny Depp";
        cout<<"\n2.Brad pitt";
        cout<<"\n3.Christan Bale"<<endl;
        cin>>vote;
        if(vote<1 || vote>3)                // && ki jagah ||
            throw 2.0;
        cout<<"your vote is casted";
    }catch(int e){
        cout<<"you are underage and cannot cast a vote"<<endl;
    }catch(string &p){                      // string* nahi, string&
        cout<<"nationality is Indian"<<endl;
    }catch(char *p){
        cout<<"you are asian and cannot cast a vote"<<endl;
    }catch(...){
        cout<<"invalid choice";
    }
    return 0;
}