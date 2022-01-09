#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int key){
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int findPosition(int arr[], int n, int target){
    int pivot = getPivot(arr,n);
    if(pivot == -1){
        return binarySearch(arr,0,n-1,target);
    }
    else if(arr[pivot] == target){
        return pivot;
    }
    else if(arr[0] <= target){
        return binarySearch(arr,0,pivot-1,target);
    }
    else{
        return binarySearch(arr,pivot,n-1,target);
    }
}

int main(){
    int t,n,A[100],target;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>target;
        for(int j=0; j<n; j++){
            cin>>A[j];
        }
        cout<<findPosition(A,n,target)<<endl;
    }
}