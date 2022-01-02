#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;

    cout<<"Bitwise AND: "<<(a & b)<<endl;
    cout<<"Bitwise OR: "<<(a | b)<<endl;
    cout<<"Bitwise NOT of a: "<<(~a)<<endl;
    cout<<"Bitwise NOT of b: "<<(~b)<<endl;
    cout<<"Bitwise XOR: "<<(a ^ b)<<endl;
}