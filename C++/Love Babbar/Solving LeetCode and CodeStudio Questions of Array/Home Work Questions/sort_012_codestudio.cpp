/* Problem Statement :
You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

Note :
Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.

Note:
You need to change in the given array/list itself. Hence, no need to return or print anything.

Constraints :
1 <= T <= 10
1 <= N <= (5 * (10 ^ 5))
0 <= ARR[i] <= 2
Where 'N' is the size of the given array/list.
And, ARR[i] denotes the i-th element in the array/list.

Time Limit: 1sec 

Sample Input :
2
6
0 1 2 2 1 0
7
0 1 2 1 2 1 2

Sample Output :
0 0 1 1 2 2
0 1 1 1 2 2 2
*/

#include<iostream>
using namespace std;

void sort012(int arr[], int n){
    int low = 0;
    int high = n - 1;
    int mid = 0;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t, size, A[100];
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>size;
        for(int j=0; j<size; j++){
            cin>>A[j];
        }
        sort012(A,size);
        printArray(A,size);
        cout<<endl;
    }
}