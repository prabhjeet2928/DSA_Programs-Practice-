// Create a program that give nth value of fibonaaci series

#include<iostream>
using namespace std;
int fibonaaci(int num){
    int firstNum = 0;
    int secondNum = 1;
    int nextNum = 0;
    for(int i=3; i<=num; i++){
        nextNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = nextNum;
    }
    return nextNum;
}

int main(){
    int n;
    cin>>n;
    int fib = fibonaaci(n);
    cout<<"Answer is: "<<fib;
}