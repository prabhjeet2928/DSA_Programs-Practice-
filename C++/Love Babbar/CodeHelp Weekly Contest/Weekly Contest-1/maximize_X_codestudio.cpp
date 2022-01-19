/* Problem Statement: 
You have a total of 'B' candies and ‘N’ friends each having various demands for candies. You need to find the maximum possible value ‘X’ such that you can full fill all the demands having quantity less than or equal to ‘X’ of any of the friends. More formally, the value of all demands to be full-filled should be less than or equal to X and their total sum must be less than or equal to ‘B’.

Example:
You have 3 friends and 20 total candies. 
The first friend demands [1,2,3] candies, 
The second friend demands [4,2,3] candies and
The third friend demands [1,10,2] candies. 
So if you choose X as 9, demands fulfilled of 1st friend are [1,2,3], total = 6, demands fulfilled of 2nd friend are [4,2,3], total = 9, and demands fulfilled of the third friend are [1,2], total = 3. 
So total candies used is 6+9+3=18 which is less than B(20). So X=9 is possible. (You have to find the maximum such value of X).

Constraints :
1 <= T <= 10
1 <= N <= 10^4
1 <= B <= 10^9
1 <= S <= 10^5
1 <= ARR[i][j] <= 10^9
where i varies from 0 to N
ARR[i][j] is the jth demand of ith friend.
It is guaranteed that the sum of all the demands(values) for all friends is greater than B and the total number of demands of all friends is less than or equal to 10^5.

Time Limit: 1 sec

Sample Input :
1
3 20
3 1 2 3
3 4 2 3
3 1 10 2

Sample Output :
9

Explanation For Sample Output :
In the First test case, 
The maximum value of X that satisfies the conditions is 9, so 9 is printed. 
So if you choose X as 9, demands fulfilled of 1st friend are [1,2,3], demands fulfilled of 2nd friend are [4,2,3], and demands fulfilled of the third friend are [1,2]. 
So total candies used is 1+2+3+4+2+3+1+2=18 which is less than B(20). So X=9 is possible.

X=10 is not possible as if we choose 10, demands fulfilled of 1st friend are [1,2,3], demands fulfilled of 2nd friend are [4,2,3], and demands fulfilled of the third friend are [1,10,2]. 
So total candies used is 1+2+3+4+2+3+1+10+2=28 which is greater than B(20).  So, the largest value of X possible is 9. */

#include<iostream>
using namespace std;
bool isPossible(int n, int arr[][0], int B, int mid){
    int tCount = 0;
    for(int i=0; i<n; i++){
        for(int j=1; j<arr[i][0]; j++){
            if(arr[i][j] <= mid){
                tCount += arr[i][j];
            }
        }
        if(tCount>B){
            return false;
        }
    }
}

int findMaxX(int n, int arr[][0], int B){
    int start = 0, end = 0, sum = 0;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=1; j<=arr[i][0]; j++){
            sum += arr[i][j];
        }
        end = max(end,sum);
    }
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(isPossible(n,arr,B,mid)){
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
    int t;
    cin>>t;
    while(t--){
        int t1, B, A[100][0];
        int n;
        cin>>t1>>B;
        while(t1--){
            cin>>n;
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cin>>A[i][j];
                }
            }
        }
        cout<<findMaxX(n,A,B);
    }
}