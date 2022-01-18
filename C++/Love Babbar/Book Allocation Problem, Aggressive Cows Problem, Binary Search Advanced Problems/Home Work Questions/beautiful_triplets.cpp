/* Problem Statement: 

"See the theroy on Hackerrank -> https://www.hackerrank.com/challenges/beautiful-triplets/problem" */

#include<iostream>
using namespace std;

int binarySearch(int arr[], int key, int start, int end){
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

int beautifulTriplets(int d, int arr[], int n){
    if(n<3){
        return 0;
    }
    int count = 0;
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            if(arr[j] - arr[i] == d){
                int pos = binarySearch(arr,d+arr[j],j+1,n-1);
                if(pos!=-1){
                    count++;
                }
            }
        }
    }
    return count;
}

int main(){
    int n,d,A[100];
    cin>>n>>d;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<beautifulTriplets(d,A,n)<<endl;
}