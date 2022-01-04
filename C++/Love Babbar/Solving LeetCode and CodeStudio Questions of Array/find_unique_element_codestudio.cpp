/* Problem Statement :
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.

Note -> Unique element is always present in the array/list according to the given condition.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec

Sample Input:
1
7
2 3 1 6 3 6 2

Sample Output:
1
*/

#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int t,n,A[100];
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>A[j];
        }
        cout<<findUnique(A,n)<<endl;
    }
}