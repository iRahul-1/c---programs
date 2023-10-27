#include<iostream>
#include<string.h>
using namespace std;
class student{
    string name;
    int id;
    public:
    student(string &sname,int sid):name(sname),id(sid){}
    string getname(){
        return name;
    }
    int getid(){
        return id;
    }
    void print(){
        cout<<"\nid:"<<id<<"\nname:"<<name<<endl;
    }
};
int main(){
    string n;
    int id;
    cout<<"Enter name: ";
    cin>>n;
    cout<<"Enter id: ";
    cin>>id;
    student student(n,id);
    student.print();
}