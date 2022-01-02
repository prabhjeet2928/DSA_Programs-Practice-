// Create AP Program for finding the nth term


#include<iostream>
using namespace std;
int AP(int number){
    int ap = 3*number + 7;
    return ap;
}

int main(){
    int n;
    cin>>n;
    int ans = AP(n);
    cout<<"The AP of "<<n<<"th term is: "<<ans<<endl;
}