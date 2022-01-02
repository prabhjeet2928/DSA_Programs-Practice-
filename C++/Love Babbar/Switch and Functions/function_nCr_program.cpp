#include<iostream>
using namespace std;
int factorial(int num){
    int fact = 1;
    for(int i = 1; i<=num; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    int answer = num/denom;
    return answer;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<"Answer is: "<<nCr(n,r)<<endl;
}