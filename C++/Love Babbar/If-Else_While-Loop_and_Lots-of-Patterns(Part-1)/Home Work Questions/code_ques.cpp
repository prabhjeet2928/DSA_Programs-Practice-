#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your character: ";
    cin>>ch;
    if((ch>='a') && (ch<='z')){
        cout<<"This is Lower Case"<<endl;
    }
    else if((ch>='A') && (ch<='Z')){
        cout<<"This is Upper Case"<<endl;
    }
    else if((ch>='0') && (ch<='9')){
        cout<<"This is Numeric"<<endl;
    }
}