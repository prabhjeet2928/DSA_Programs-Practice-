#include<iostream>
using namespace std;
void fit_n(int arr[], int size, int value){
    for(int i = 0; i < size; i++){
        arr[i] = value;
    }
}
int main(){
    int A[100];
    fit_n(A,100,99);
    for(int i = 0; i < 100; i++){
        cout<<A[i]<<" ";
    }
}