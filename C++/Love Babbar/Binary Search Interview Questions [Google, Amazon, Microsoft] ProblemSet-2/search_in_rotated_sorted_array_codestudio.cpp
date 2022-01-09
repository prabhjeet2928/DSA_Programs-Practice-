/* Problem Statement :
You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
Now the array is rotated at some pivot point unknown to you. For example, if ARR = [ 1, 3, 5, 7, 8]. Then after rotating ARR at index 3, the array will be ARR = [7, 8, 1, 3, 5].
Now, your task is to find the index at which ‘K’ is present in ARR.

Note :
1. If ‘K’ is not present in ARR then print -1.
2. There are no duplicate elements present in ARR. 
3. ARR can be rotated only in the right direction.
For example, if ARR = [12, 15, 18, 2, 4] and K = 2, then the position at which K is present in the array is 3 (0-indexed).

Follow Up :
Can you do this in Logarithmic time and constant additional space?

Constraints:
1 <= T <= 100
1 <= N <= 5000
0 <= K <= 10^5
0 <= ARR[i] <= 10^5

Time Limit : 1 second

Sample Input :
2
4 3
8 9 4 5
7 2
2 4 5 6 8 9 1

Sample Output :
-1 
0

Explanation Of Sample Output :
For the first test case, 3 is not present in the array. Hence the output will be -1.
For the second test case, the occurrence of 2 is at index 0. Hence the output is 0. */

#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
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

int binarySearch(int arr[],int start, int end, int key){
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int findPosition(int arr[],int n, int target){
    int pivot = findPivot(arr,n);
    if((arr[pivot] <= target) && (arr[n-1] >= target)){
        return binarySearch(arr,pivot,n-1,target);
    }
    else{
        return binarySearch(arr,0,pivot-1,target);
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