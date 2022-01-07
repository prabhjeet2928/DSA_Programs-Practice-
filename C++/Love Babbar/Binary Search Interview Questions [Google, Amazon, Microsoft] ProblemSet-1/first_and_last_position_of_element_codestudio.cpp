/* Problem Statement :
You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.
Now, your task is to find the first and last occurrence of ‘K’ in ARR.

Note :
1. If ‘K’ is not present in the array, then the first and the last occurrence will be -1. 
2. ARR may contain duplicate elements.

For example, if ARR = [0, 1, 1, 5] and K = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.

Note:
You do not need to print anything; it has already been taken care of. Just implement the given function.

Constraints:
1 <= T <= 100
1 <= N <= 5000
0 <= K <= 10^5
0 <= ARR[i] <=10^5

Time Limit : 1 second

Sample Input :
2
6 3
0 5 5 6 6 6
8 2
0 0 1 1 2 2 2 2

Sample Output :
-1 -1 
4 7

Explanation Of Sample Output :
For the first test case, 3 is not present in the array. Hence the first and last occurrence of 3 is -1 and -1.
For the second test case, the first occurrence of 2 in at index 4 and last occurrence is at index 7. */

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
            end = mid - 1;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

        // key < arr[mid]
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

int main(){
    int even[8] = {1, 2, 3, 3, 3, 3, 3, 5};

    cout<<"First Occurance of 3 at Index is: "<<firstOcc(even,5,3)<<endl;
    cout<<"Last Occurance of 3 at Index is: "<<lastOcc(even,8,3)<<endl;
}