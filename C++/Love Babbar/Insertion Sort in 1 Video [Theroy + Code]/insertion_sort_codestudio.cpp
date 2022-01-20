/* Problem Statement :
You are given ‘N’ integers in the form of an array ‘ARR’. Print the sorted array using the insertion sort.

Note : No need to return anything. You should sort the array in-place.

For Example :
Let ‘ARR’ be: [1, 4, 2]
The sorted array will be: [1, 2, 4].

Constraints :
1 <= T <= 10
1 <= N <= 5*10^3
1 <= ARR[i] <= 10^5

Time Limit: 1 sec

Sample Input :
2
4
3 1 2 2
3
1 4 2

Sample Output :
1 2 2 3
1 2 4

Explanation For Sample Output :
For test case 1: 
The sorted array will be: [1, 2, 2, 3].
For test case 2: 
The sorted array will be: [1, 2, 4]. */

#include<iostream>
using namespace std;

void insertionSort(int n, int arr[]){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j;
        for(j=i-1; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void printArray(int n, int arr[]){
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
        insertionSort(n,A);
        printArray(n,A);
    }
}