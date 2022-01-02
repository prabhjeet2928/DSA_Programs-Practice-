#include<iostream>
using namespace std;

// function signature
void printCounting(int num){
    // function body
    for(int i=1; i<=num; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    return ;
}

int main(){
    int n;
    cin>>n;
    printCounting(n); // function call
}