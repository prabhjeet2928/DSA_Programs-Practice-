#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    int temp;
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {31, 33, 9, 74,43};

    swapAlternate(even,8);
    printArray(even,8);

    swapAlternate(odd,5);
    printArray(odd,5);
}