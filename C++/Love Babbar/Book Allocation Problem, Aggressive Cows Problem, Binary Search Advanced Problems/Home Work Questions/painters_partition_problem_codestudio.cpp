/* Problem Statement:
Given an array/list of length ‘N’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘K’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.
You are supposed to return the area of the minimum time to get this job done of painting all the ‘N’ boards under a constraint that any painter will only paint the continuous sections of boards.

Constraints :
1 <= T <= 5
1 <= N <= 10^4
1 <= K <= N
1 <= ARR[i] <= 10^5
Where ‘T’ is the number of test cases.
'N' is the length of the given array/list (boards).
‘K’ is the number of painters available.
And, ARR[i] denotes the i-th element in the array/list.

Time Limit: 1 sec.

Sample Input :
2
4 2
5 5 5 5
4 2
10 20 30 40

Sample Output :
10
60

Explanation For Sample Input :
In the first test case, we can divide the boards into 2 equal-sized partitions, so each painter gets 10 units of the board and the total time taken is 10.
In the second test case, we can divide the first 3 boards for one painter and the last board for the second painter. */

#include<iostream>
using namespace std;

bool isPossible(int boards[], int n, int k, int mid){
    int painterCount = 1;
    int boardsSum = 0;
    for(int i=0; i<n; i++){
        if(boardsSum+boards[i] <= mid){
            boardsSum += boards[i];
        }
        else{
            painterCount++;
            if(painterCount>k || boards[i]>mid){
                return false;
            }
            boardsSum = 0;
            boardsSum += boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(int boards[], int k, int n){
    int start = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += boards[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(isPossible(boards,n,k,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int t,n,k,A[100];
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>k;
        for(int j=0; j<n; j++){
            cin>>A[j];
        }
        cout<<findLargestMinDistance(A,k,n)<<endl;
    }
}