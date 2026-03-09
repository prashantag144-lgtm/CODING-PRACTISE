#include<iostream>
#include<string>
using namespace std;

class Parent{
    public:
    void display(){
        cout<<"this is the Parent class with same fuction name";
    }
    
};

class Child:public Parent{
    public:
    void display(){
        cout<<"this is the child class with came fucntion";
    }
};

int main(){
   Parent p1;
    Child c1;
    c1.display();
    p1.display();

    
}