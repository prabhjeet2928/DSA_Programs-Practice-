#include<iostream>
#include<string>
using namespace std;

string replaceSpacesOptimizedSpace(string &str){
    int n = str.length() - 1;
    int count = 0;
    for(int i=0; i<n; i++){
        if(str[i] == ' '){
            count++;
        }
    }
    int newLen = n + count * 2;
    str.resize(newLen + 1);
    while(newLen){
        if(str[n] != ' '){
            str[newLen] = str[n];
            newLen--;
        }
        else{
            str[newLen] = '0';
            newLen--;
            str[newLen] = '4';
            newLen--;
            str[newLen] = '@';
            newLen--;
        }
        n--;
    }
    return str;
}

int main(){
    int t;
    cin>>t;
    string str;
    while(t--){
        cin.ignore();
        getline(cin,str);
        cout<<replaceSpacesOptimizedSpace(str)<<endl;
    }
}