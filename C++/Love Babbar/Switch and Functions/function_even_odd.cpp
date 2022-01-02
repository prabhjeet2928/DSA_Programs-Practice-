#include<iostream>
using namespace std;
bool isEven(int num){
    // odd
    if(num&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cin>>n;
    if(isEven(n)){
        cout<<n<<" is a Even Number";
    }
    else{
        cout<<n<<" is a Odd Number";
    }
}