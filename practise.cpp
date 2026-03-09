/* // BASIC OOPS EXAMPLE

#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int ID;
    Student(string s,int rn){
        name=s;
        rn=ID;
    }
    void display(){
        cout<<"encapsulation is performed";
    }
};

int main(){

Student s1("prashanth",23);
cout<<s1.name;
s1.display();


}


// Encapsulation

#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    //private:
    int rollno=1;
    int std_id=2;

    void display(){
        cout<<rollno<<"and the other private memeber is"<<std_id;
    }
};
int main(){
    Student s1;
    s1.display();

}

 */
// INHERITANCE

#include<iostream>
using namespace std;
class Vehicle{
    string name;
    int model;
};


class Son:public Vehicle{
    public:
    string type;
    int mileage;

};

int main(){


    Son s1;
    s1.mileage;
    s1.type;
    

}
