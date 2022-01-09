#include<iostream>
using namespace std;

int findPosition(int arr[], int n, int target){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[start] <= arr[mid]){
            if(target >= arr[start] && target < arr[mid]){
                end = mid;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(target <= arr[end] && target > arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid;
            }
        }
        mid = start + (end - start)/2;
    }
    return -1;
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