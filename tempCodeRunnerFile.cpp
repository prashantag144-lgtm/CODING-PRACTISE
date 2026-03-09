 #include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;

    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int  Area(){
        return length*breadth;
    }
    int Breadth(){
        return 2*(length+breadth);
    }

};
int main(){
    Rectangle r1(23,32);
    cout<<r1.Area()<<"  ";
    cout<<r1.Breadth();


}