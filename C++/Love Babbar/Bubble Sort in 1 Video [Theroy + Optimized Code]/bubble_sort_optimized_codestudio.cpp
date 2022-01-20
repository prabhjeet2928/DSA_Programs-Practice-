/* Problem Statement :
Bubble Sort is one of the sorting algorithms that works by repeatedly swapping the adjacent elements of the array if they are not in sorted order.
You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 1000
Where 'T' represents the number of test cases, 'N' represents the size of the array, and Arr[i] represents the elements of the array.

Time Limit: 1 sec.

Sample Input :
2
2
1 2
4
4 3 2 1

Sample Output :
1 2
1 2 3 4 */

#include<iostream>
using namespace std;

void bubbleSortOptimized(int arr[], int n){
    for(int i=1; i<n; i++){
        bool swapped = false;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
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
    int t, n, A[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        bubbleSortOptimized(A,n);
        printArray(A,n);
    }
}