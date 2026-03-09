#include<iostream>
#include<string>
using namespace std;

class Teacher{
    //properties / attributes

    private:
    double salary;
    
    public:
   
    string name;
    string department;
    string subject;

 //non parameterised constructor
    Teacher(){
        department="cs";
    }

    //Parameterised constructor

    Teacher(string n,string dept,string sub){
        name=n;
        department=dept;
        subject=sub;
    }




//copy constructor

Teacher(Teacher &obj){ //pass by refernce

        cout<<"i am custom constructor"; 
        this->name=obj.name;
        this->department=obj.department;
        this->salary=obj.salary;
        this->subject=obj.subject;
} 
Teacher(string n,string dept,string sub){
        this->name=n;
        this->department=dept;
        this->subject=sub;
    }

    
    void setsalary(double s){
        salary=s;
    }
    double getsalary(){
        return salary;
    }

    //methods/ member functions

    void changedepartment(string newDept){
        department=newDept;
    }

    void display(){
        cout<<name;
        cout<<department;
        cout<<subject;

    }
};

int main(){
        Teacher t1;//calls constructor

    
        Teacher t2;
        t1.name="prashnath";
      
        t1.subject="C++";
        
        t1.setsalary(25000);
        cout<<t1.getsalary();
        cout<<t1.department;

        Teacher t1("xyz","ece","manda");
        t1.display();

        Teacher t2(t1);  //default copy constructor is invoked /called /excecuted ,all the object propertires are tranferred to another object 
        t2.display();
        return 0;
}