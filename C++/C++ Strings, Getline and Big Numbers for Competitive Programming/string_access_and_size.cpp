#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Hello";
    cout<<str[0]<<endl;
    str[0] = 'a';
    cout<<str<<endl;
    cout<<str.size()<<endl;
    for(int i=0; i<str.size(); ++i){
        cout<<str[i]<<endl;
    }
    return 0;
}