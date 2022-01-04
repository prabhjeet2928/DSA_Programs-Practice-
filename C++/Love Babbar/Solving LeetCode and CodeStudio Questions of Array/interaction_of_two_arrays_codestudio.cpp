/* Problem Statement: 
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.

Note :
You do not need to print anything, it has already been taken care of. Just implement the given function.

Constraints :
1 <= T <= 100
1 <= N, M <= 10^4
0 <= A[i] <= 10^5
0 <= B[i] <= 10^5

Time Limit: 1 sec

Follow Up:
Can we solve this problem using the time complexity of O(max(N, M)).

Sample Input :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  

Sample Output :
2 2 3
3   

Explanation For Sample Input :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.
*/

#include<iostream>
using namespace std;

void findArrayIntersection(int arr1[], int n, int arr2[], int m){
    int i=0, j=0;

    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int t,size1, size2, A[100],B[100];
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>size1>>size2;
        for(int j=0; j<size1; j++){
            cin>>A[j];
        }
        for(int k=0; k<size2; k++){
            cin>>B[k];
        }
        findArrayIntersection(A,size1,B,size2);
        cout<<endl;
    }
}