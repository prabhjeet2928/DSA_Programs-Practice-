/* Problem Statement:
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

Example:
We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
based indexing so the subarray {5, 6} will be reversed and our 
output array will be {1, 2, 3, 4, 6, 5}.

Constraints:
1 <= T <= 10
0 <= M <= N <= 5*10^4
-10^9 <= ARR[i] <= 10^9

Time Limit: 1 sec

Sample Input:
2
6 3
1 2 3 4 5 6
5 2
10 9 8 7 6

Sample Output:
1 2 3 4 6 5
10 9 8 6 7

Explanation:
For the first test case, 
Considering 0-based indexing we have M = 3 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {1, 2, 3, 4, 6, 5}.

For the second test case, 
Considering 0-based indexing we have M = 2 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {10, 9, 8, 6, 7}. */

#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr, int m){
    int start = m + 1;
    int end = arr.size() - 1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void print(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t,n,m;
    vector<int> v;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int value;
        for(int i=0; i<n; i++){
            cin>>value;
            v.push_back(value);
        }
        reverseArray(v,m);
        print(v);
        v.clear();
    }
}