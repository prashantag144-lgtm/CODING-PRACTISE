#include<iostream>
#include<string>
using namespace std;

class Shape{
    public:
        virtual void draw()=0;

        
};

class Circle{
    public:
    void draw(){
        cout<<"this is the drawing";
    }
};

int main(){

    Circle c1;
    c1.draw();

}