#include<iostream>
#include<string>
using namespace std;

class Account{
    private:

    double balance;
    string password;

    public:

    string AccID;
    string accname;

    void setbalance(double b){
        balance=b;
    }

    double getbalance(){
        return balance;
    }


};


int main(){
    Account x;
    x.setbalance(300);
    cout<<x.getbalance();
}
