/* 1 NORMAL WAY  */


/* #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    for(auto it:arr){
        cout<<it<<" ";
    }
}
 */

/* USING NON PRIMITIVE ARRAY  */


/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vpp;
    int n;
    cin>>n;
    int inp;
    for(int i=0;i<n;i++){
        cin>>inp;
        vpp.push_back(inp);
    }

    for(int i=0;i<n;i++){
        cout<<vpp[i];
    }
    
} */

/* SIZE OF ARRAY IS NOT GIVEN || COMMA SEPERATED VALUE */

/*  #include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
     stringstream ss(s);
    vector<int>vpp;
  
    string temp;
    while(getline(ss,temp,',')){
       int num=stoi(temp);
       vpp.push_back(num);
    }
    for(auto it:vpp){
        cout<<it<<" ";
    }
} */
 

/* #include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    vector<int>vpp;
    string temp;
    while(getline(ss,temp,' ')){
        int num=stoi(temp);
        vpp.push_back(num);
    }

    for(int i=0;i<vpp.size();i++){
        cout<<vpp[i];
    }

} */

/*  BRACKET SPECIFIC INPUT */
/* 
#include<bits\stdc++.h>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    vector<int>vpp;


    if(s.front()=='['&&s.back()==']'){
        s=s.substr(1,s.length()-2);
    }
    stringstream ss(s);
    string temp;

    


    while(getline(ss,temp,',')){
        int num=stoi(temp);
        vpp.push_back(num);
    }


} */


/* #include<bits\stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    cout<<s;
    return 0;
} */

/* IF SIZE IS GIVEN  IN STRING*/

#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    cout<<n<<" "<<s<<endl;
}