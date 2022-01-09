/* Problem Statement:
You are given a positive integer ‘N’. Your task is to find and return its square root. If ‘N’ is not a perfect square, then return the floor value of sqrt(N).

For example:
For ‘N’  = 25, return 5 , for ‘N’ = 20 return 4, for ‘N’ = 2 return 1.

Constraints:
1 <= T <= 5
0 <= N <= 10 ^ 16

Time Limit: 1 sec.

Sample Input:
2
4
6

Sample Output:
2
2

Explanation Of Sample Input:
In the first test case, the square root of the given number 4 is 2.
In the second test case, the square root of the given number 6 lies between 2 and 3, so the floor value is 2. */

#include<iostream>
using namespace std;

int sqrtN(long long int N){
    long long int start = 0;
    long long int end = N;
    long long int ans = -1;
    long long int mid = start + (end - start)/2;

    if(N == 0 || N == 1){
        return N;
    }

    else{
        while(start <= end){
            if(mid == (N/mid)){
                return mid;
            }
            else if(mid < (N/mid)){
                ans = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
    }
    return ans;
}

int main(){
    long long int n;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        cout<<sqrtN(n)<<endl;
    }
}