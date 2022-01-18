/* Problem Statement:
Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.

Constraints :
1 <= T <= 5
2 <= N <= 20000
2 <= C <= N
0 <= ARR[i] <= 10 ^ 9
Where ‘T’ is the number of test cases, 'N' is the length of the given array and, ARR[i] denotes the i-th element in the array.

Time Limit: 1 sec.

Sample Input :
2
3 2
1 2 3
5 2
4 2 1 3 6

Sample Output :
2
5

Explanation To Sample Input :
In the first test case, the largest minimum distance will be 2 when 2 cows are placed at positions {1, 3}.
In the second test case, the largest minimum distance will be 5 when 2 cows are placed at positions {1, 6}. */

#include<iostream>
#include<algorithm>
using namespace std;

bool possible(int stalls[], int k, int n, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];
    for(int i=0; i<n; i++){
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(int stalls[], int k, int n){
    sort(stalls,stalls+n);
    int start = 0;
    int maxi = -1;
    for(int i=0; i<n; i++){
        maxi = max(maxi,stalls[i]);
    }
    int end = maxi;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(possible(stalls,k,n,mid)){
            ans = mid;
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
    int t,n,k,A[100];
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>k;
        for(int j=0; j<n; j++){
            cin>>A[j];
        }
        cout<<aggressiveCows(A,k,n)<<endl;
    }
}