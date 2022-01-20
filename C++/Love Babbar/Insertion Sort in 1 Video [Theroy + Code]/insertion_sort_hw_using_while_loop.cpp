#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i - 1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t,n,A[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        insertionSort(A,n);
        printArray(A,n);
    }
}