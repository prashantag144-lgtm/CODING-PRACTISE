#include<iostream>
#include<string>
using namespace std;

void func(){
    static int x=0; // only 1 time is initiated;
    cout<<x<<" "<<endl;
    x++;

}
int main(){
    func();
    func();
    func();
    return 0;


}