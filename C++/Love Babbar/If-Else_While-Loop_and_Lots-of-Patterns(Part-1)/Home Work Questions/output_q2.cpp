#include<iostream>
using namespace std;
int main(){
    int a = 2;
    int b = a + 1; //3
    if((a=3)==b){
        cout<<a;
    }
    else{
        cout<<a+1;
    }
}