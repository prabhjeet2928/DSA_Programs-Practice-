#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 2;
    int b = 3;
    cout<<(a == b)<<endl; // 0
    cout<<(a != b)<<endl; // 1

    // (&&  ||) -> 2 operators
    int c = 4;
    cout<<((b > a) && (b > c))<<endl;  // 0
    cout<<((b > a) || (b > c))<<endl;  // 1
}