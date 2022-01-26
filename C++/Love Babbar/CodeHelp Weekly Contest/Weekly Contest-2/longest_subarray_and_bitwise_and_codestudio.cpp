/* Problem Statement
You are given an array of integers(ARR) and Q queries.
Query Type-> X: Find the largest index IND such that ARR[1] & ARR[2] & …...ARR[IND] >=X 
For each query, your task is to find out the largest index IND such that the bitwise and of elements in the array ARR from index 1 to IND is greater than equal to X.
Example:-
ARR = [3,7,9,16]
Q = 2
Query 1-> 2 
Query 2-> 3
Answer for the first query is 2. (3 & 7 = 3 >= 2).
Answer for the second query is 3 (3 & 7 & 9 >= 1).

Constraints :
1 <= T <= 5
3 <= N <= 10^5
1 <= Q <= 10^5
1 <= ARR[i] <= 10^9
1 <= X <= 10^9

Time Limit: 1sec

Sample Input :
1
4 2
3 7 9 16
2
1

Sample Output :
2
3

Explanation For Sample Output :
In the first test case, the answer to the first query is 2 as 3 & 7 is 3 which is greater equal to 2. The answer to the second query is 3 as 3 & 7 & 9 is 1 which is greater equal to 1. */

#include<iostream>
#include<vector>
using namespace std;

vector<int> bitwiseAnd(int n, int q, vector<int> arr, vector<int> queries){
    for(int i=1; i<arr.size(); i++){
        arr[i] = arr[i] & arr[i-1];
    }
    int idx=0;
    vector<int> ans;
    while(q--){
        int low = 0, high = n;
        while(low<high){
            int mid = low + (high-low)/2;
            if(arr[mid]<queries[idx]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        idx++;
        ans.push_back(low);
    }
    return ans;
}

int main(){
    int t,n,q;
    cin>>t;
    vector<int> arr;
    vector<int> queries;
    while(t--){
        cin>>n>>q;
        int value1,value2;
        for(int i=0; i<n; i++){
            cin>>value1;
            arr.push_back(value1);
        }
        for(int j=0; j<q; j++){
            cin>>value2;
            queries.push_back(value2);
        }
        vector<int> data = bitwiseAnd(n,q,arr,queries);
        for(int i=0; i<data.size(); i++){
            cout<<data[i]<<endl;
        }
        arr.clear();
        queries.clear();
        data.clear();
    }
}