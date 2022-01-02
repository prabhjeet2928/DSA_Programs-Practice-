#include<iostream>
using namespace std;
int main(){
    int a = 2;
    int b = 3;
    bool first = (a == b);
    cout<<first<<endl;  // False

    bool second = (a > b);
    cout<<second<<endl;  // False

    bool third = (a < b);
    cout<<third<<endl;  // True

    bool fourth = (a >= b);
    cout<<fourth<<endl;  // False

    bool fifth = (a <= b);
    cout<<fifth<<endl;  // True

    bool sixth = (a != b);
    cout<<sixth<<endl;  // True
}