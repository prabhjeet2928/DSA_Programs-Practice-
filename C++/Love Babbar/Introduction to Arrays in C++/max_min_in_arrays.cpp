#include<iostream>
using namespace std;

int getMax(int arr[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    // returning max value
    return max;
}

int getMin(int arr[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    // returning min value
    return min;
}

int main(){
    int size;
    cin>>size;
    int num[100];

    // taking input as array
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Maximum value is: "<<getMax(num,size)<<endl;
    cout<<"Minimum value is: "<<getMin(num,size)<<endl;
}