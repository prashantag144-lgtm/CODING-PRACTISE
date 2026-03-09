#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    string USN;
    int marks;

    Student(){
        cout<<"non parameterised constructor";
    }

    Student(string name,string USN,int marks){
            this->name=name;
            this->USN=USN;
            this->marks=marks;
    }
    void display(){
        cout<<name<<endl;
        cout<<USN<<endl;
        cout<<marks<<endl;
    }
};

int main(){

    Student s1("Prashanth","1by22ec073",25);
    s1.display();
    
}