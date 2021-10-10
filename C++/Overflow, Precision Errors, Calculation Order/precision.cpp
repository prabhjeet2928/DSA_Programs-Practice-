#include<bits/stdc++.h>
using namespace std;
int main(){
    double a = 10000;
    double b = 10000;
    double c = a * b;
    cout<<c<<endl; // gives output in scientific
    cout<<fixed<<c<<endl; // not output in scientific notation
    cout<<fixed<<setprecision(0)<<c<<endl;

    c = 1e24;
    cout<<fixed<<c<<endl;
}