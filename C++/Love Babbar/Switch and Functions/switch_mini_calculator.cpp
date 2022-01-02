#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the first integer: ";
    cin>>a;
    cout<<"Enter the second integer: ";
    cin>>b;
    cout<<"Enter the operation you want to perform: ";
    cin>>op;

    switch(op){
        case '+': cout<<(a+b)<<endl;
                  break;

        case '-': cout<<(a-b)<<endl;
                  break;

        case '*': cout<<(a*b)<<endl;
                  break;

        case '/': cout<<(a/b)<<endl;
                  break;

        case '%': cout<<(a%b)<<endl;
                  break;

        default: cout<<"Please enter a valid operation"<<endl;
    }
    cout<<endl;
}