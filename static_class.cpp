#include<iostream>
#include<string>
using namespace std;

class ABC{
    public:
    ABC(){
        cout<<"constructor";
    }

    ~ABC(){
        cout<<"destructor";
    }

};

int main(){
    if(true){
        static ABC obj;
    }

    cout<<"ed of main fn";
    return 0;

}