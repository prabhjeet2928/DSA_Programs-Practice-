#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1 = "Hello";
    string str2 = "World";
    string result = str1 + " " + str2;
    cout<<result<<endl;
    if(str1 == str2) {
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }
    return 1;
}