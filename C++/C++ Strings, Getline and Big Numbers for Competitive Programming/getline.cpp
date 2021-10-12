#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    cin>>str1>>str2;
    cout<<str1<<" "<<str2<<endl;
    string str3 = str1 + " " + str2;
    cout<<str3;
    string str4;
    getline(cin,str4);
    cout<<str4;

    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }
}