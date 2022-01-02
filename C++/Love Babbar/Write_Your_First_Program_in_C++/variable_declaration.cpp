#include<iostream>
using namespace std;
int main(){
    int a = 123;
    cout<<a<<endl;
    char b = 'u'; // char is an single character supported only
    cout<<b<<endl;
    bool bl = true;
    cout<<bl<<endl;
    float f = 1.2;
    cout<<f<<endl;
    double d = 1.23;
    cout<<d<<endl;
    int size = sizeof(a); //sizeof is used to give that variable size which type is used
    cout<<"Size of a is: "<<size<<endl;
}