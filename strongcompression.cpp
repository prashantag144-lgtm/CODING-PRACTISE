#include<bits\stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int i=0,n=str.size();
    for(i=0;i<n-1;i++){
        int count=1;
        while(i<n&&str[i]==str[i+1]){
            i++;
            count++;
        }
        cout<<str[i]<<count;
    }
}