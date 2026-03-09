#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    Student(){
    }
};

class StudentID: public Student{

    public:
    string ID;
    string USN;

};

class Sturesearch:public StudentID{
    public:
    string paper_name;
    int date;

    void display(){
        cout<<name<<" "<<endl;
        cout<<ID<<" "<<endl;
        cout<<USN<<" "<<endl;
    }
};

int main(){

    Sturesearch s1;
    s1.name="Prashanth";
    s1.ID="1by22ec073";
    s1.USN="1by222";
    s1.display();
    


    
}