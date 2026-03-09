#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
    /*
    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
    */
    Person() {
    }
    Person(string nam,int sal){
        name=nam;
        age=sal;
    }

};


class Student:public Person{
        public:
        int rollno;


        void getinfo(){
            cout<<name;
            cout<<age;
            cout<<rollno;
        }

};
int main(){

    Student s1;
    s1.name="rahul";
    s1.age=12;
    s1.rollno=12;
    s1.getinfo();


}
