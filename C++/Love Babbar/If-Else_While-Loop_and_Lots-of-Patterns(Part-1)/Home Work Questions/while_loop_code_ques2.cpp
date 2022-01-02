#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=0, second=1, third;
    int i=3;
    cout<<first<<" "<<second<<" ";
    while(i<=n){
        third = first + second;
        cout<<third<<" ";
        first = second;
        second = third;
        i = i + 1;
    }
}