/* Problem Statement :
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:
Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

Note : A duplicate number is always present in the given array.

Constraints:
1 <=  T  <= 10
2 <=  N <= 10 ^ 5
1 <=  ARR[i]  <= N - 1
Where 'T' denotes the number of test cases, 'N' denotes the number of elements in the array, and 'ARR[i]' denotes the 'i-th' element of the array 'ARR'.
Time limit: 1 sec

Sample Input :
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2

Sample Output :
1
3

Explanation Of Sample Input :
For the first test case, 
The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.
For the second test case,
The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.
*/

#include<iostream>
using namespace std;

int findDuplicate(int arr[], int size){
    int ans = 0;

    // XOR of all array elements
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }

    // XOR ( 1 to n-1 )
    for(int i=1; i<size; i++){
        ans = ans ^ i;
    }

    return ans;
}

int main(){
    int t, size, arr[100];
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>size;
        for(int j=0; j<size; j++){
            cin>>arr[j];
        }
        cout<<findDuplicate(arr,size)<<endl;
    }
}