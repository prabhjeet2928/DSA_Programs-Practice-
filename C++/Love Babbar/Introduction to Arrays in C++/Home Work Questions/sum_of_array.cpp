#include<iostream>
using namespace std;

int addition(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int size;
    cin>>size;
    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Sum of All Element in an array is: "<<addition(num,size)<<endl;
}