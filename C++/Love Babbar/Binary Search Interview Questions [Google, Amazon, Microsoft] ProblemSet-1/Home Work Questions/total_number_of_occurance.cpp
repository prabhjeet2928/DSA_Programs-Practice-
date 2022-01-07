#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = end - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int totalOcc(int arr[], int size, int key){
    int total = (lastOcc(arr,size,key) - firstOcc(arr,size,key)) + 1;
    return total;
}

int main(){
    int even[8] = {1, 2, 3, 3, 3, 3, 3, 5};
    cout<<"Total Number of Occurance of 3 is: "<<totalOcc(even,8,3)<<endl;
}