#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2; i<n; i++){
        // Divide hogya, not a prime number
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a Prime Number";
    }
    else{
        cout<<n<<" is not a Prime Number";
    }
}