/* Problem Statement :
You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.
An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

Note:
1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
2. The elements in the array need not be distinct.
3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".

Note :
You do not need to print anything, it has already been taken care of. Just implement the given function.

Constraints:
1 <= T <=  50
1 <= N <= 10^3  
-10^6 <= ARR[i] <= 10^6
-10^9 <= K <= 10^9

Time Limit: 1 sec

Sample Input :
1
5
10 5 5 5 2
12

Sample Output :
5 5 2

Explanation For Sample Input :
5 5 2 is the only triplet that adds up to 15. Note that the order of the output doesn’t matter, so 5 2 5 or 2 5 5 is also acceptable.
*/

#include<iostream>
using namespace std;

bool findtriplets(int arr[], int size, int K){
    for(int i=0; i<size-2; i++){
        for(int j=i+1; j<size-1; j++){
            for(int k=j+1; k<size; k++){
                if(arr[i]+arr[j]+arr[k] == K){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    return true;
                }
                else{
                    cout<<"-1"<<endl;
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    int t, size, K, arr[100];
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>size;
        for(int i=0; i<size;i++){
            cin>>arr[i];
        }
        cin>>K;
        findtriplets(arr,size,K);
        cout<<endl;
    }
}