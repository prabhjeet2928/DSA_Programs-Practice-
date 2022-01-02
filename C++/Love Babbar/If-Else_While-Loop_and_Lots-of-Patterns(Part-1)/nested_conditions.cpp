#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    if(a>0){
        cout<<"A is positive";
    }
    else{
        if(a<0){
            cout<<"A is negative"<<endl;
        }
        else{
            cout<<"A is zero"<<endl;
        }
    }
}