/* Problem Statement:
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note:
Each pair should be sorted i.e the first value should be less than or equals to the second value. 
Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

Note:
You are not required to print the output, it has already been taken care of. Just implement the function.

Constraints:
1 <= N <= 10^3
-10^5 <= ARR[i] <= 10^5
-2 * 10^5 <= S <= 2 * 10^5

Time Limit: 1 sec

Sample Input :
5 5
1 2 3 4 5

Sample Output :
1 4
2 3

Explaination For Sample Output :
Here, 1 + 4 = 5
      2 + 3 = 5
Hence the output will be, (1,4) , (2,3).
*/

#include<iostream>
using namespace std;

void pairSum(int arr[], int s, int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j] == s){
                cout<<min(arr[i],arr[j])<<" "<<max(arr[i],arr[j])<<endl;
            }
        }
    }
}

int main(){
    int sum, size, arr[100];
    cin>>size>>sum;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    pairSum(arr,sum,size);
}