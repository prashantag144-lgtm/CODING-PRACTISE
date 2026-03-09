#include<bits\stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int i=0;
    int n=s.size();
    string temp="";
    string temp1="";
    for(i=0;i<n;i++){
        if(isalnum(s[i])||s[i]==' '){
                temp.push_back(s[i]);
        }
        else{
            temp1.push_back(s[i]);
        }
    }
    cout<<temp1+temp;
}