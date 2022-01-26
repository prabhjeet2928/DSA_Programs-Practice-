/* Problem Statement
You are walking on a street of length ‘N’. You want to light up the street by installing street lights.
There are 'M' streetlights and the 'ith' streetlight can be installed at position 'Ci'.
You are also given the range of the streetlights 'R' which means that the 'ith' streetlight installed at position 'Ci' will enlighten street from 'Ci-R' to 'Ci+R'.
Output the minimum number of street lights required to light up the whole street or output -1 if it is impossible to light the whole street under the given conditions.
Example:-
N=10, M=3
C = [2,4,7] ( The positions of the streetlights )
R = 3 ( The range of the street-lights)
The answer will be 2 as we can install the first street light at position 2 so it illuminates the street from positions from 1 to 5 and the third street light at 7 so it illuminates the street from positions from 4 to 10.

Constraints :
1 <= T <= 10
1 <= N <= 10^9
1 <= M <= 10^5
1 <= C[i] <= N
0 <= R <= 10^9
It is guaranteed that the sum of ‘M’ over all test cases is less than equal to 10^5.

Time Limit: 1 sec

Sample Input :
2
10 4
2 4 6 8
3
2 3
1 1 1
3
1
0

Sample Output :
2
1

Explanation For Sample Output :
In the first test case, the answer is 2 as we can install the first street light at position 2 so it illuminates the street from positions from 1 to 5 and the third street light at 8 so it illuminates the street from positions from 5 to 10.
In the second test case, we can install a single street light at checkpoint 1 so it illuminates position 1, so the number of street lights required is 1. */
#include<iostream>
#include<vector>
using namespace std;

int LightUptheStreet(int n, int m, int k, vector<int> CheckPoints){
    int max_till_now = 0, last_range = 0;
    int ans = 0;
    for(int i: CheckPoints){
        if(i-k-1 > last_range){
            if(i-k-1 > max_till_now){
                ans = -1;
                break;
            }
            ans++;
            last_range = max_till_now;
        }
        max_till_now = i+k;
    }
    if(last_range<n){
        if(max_till_now<n){
            ans = -1;
        }
        else{
            ans++;
        }
    }
    return ans;
}

int main(){
    int t,n,m,k;
    vector<int> checkpoints;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int value;
        for(int i=0; i<m; i++){
            cin>>value;
            checkpoints.push_back(value);
        }
        cin>>k;
        int data = LightUptheStreet(n,m,k,checkpoints);
        cout<<data<<endl;
        checkpoints.clear();
    }
}