#include<iostream>
using namespace std;
int main(){
    int a = 'a';
    cout<<a<<endl;
    char ch = 98;
    cout<<ch<<endl;
    char ch1 = 123456;
    cout<<ch1<<endl; // given warning for implicit convert because we give 123456 but it makes a 64.
}