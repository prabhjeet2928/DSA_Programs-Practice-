/* Problem Statement:
Ninja has an array 'ARR' consisting of 'N' integers. Your primary work is to split it into three parts so that each integer is a component of a single part only. Each part must be a consecutive contiguous subsegment of the original array and can also be empty. So, the sum of each part is denoted as 'S1', 'S2' and 'S3'. Ninja made the problem even harder by declaring a condition that 'S1' must be equal to 'S3' and 'S1' must be the maximum possible amongst all possible ways.
The sum of the empty subsegment is 0.

EXAMPLE:
Input: 'N' = 5, ‘ARR’ = [5, 2, 4, 1, 4].
Output: 5
Explanation: We will split the array as [5], [2, 4] and [1, 4]. Thus, the maximum sum of the first part will be 5 and equal to the third part.

Constraints :
1 <= ‘T’ <= 10
1 <= ‘N’<= 10^4
1 <= ‘ARR[i]’ <= 10^6

Time Limit: 1 sec

Sample Input :
2
2
3 3
4 
2 3 1 5 

Sample Output :
3
5

Explanation Of Sample Input :
In the first test case, we will split the array as [3], [] and [3]. Thus, the maximum sum of the first part will be 3 and equal to the third part. Hence, the output is 3.
In the second test case, we will split the array like [2, 3], [1] and [5]. Thus, the maximum sum of the first part will be 5 and equal to the third part. Hence, the output is 5. */

#include<iostream>
using namespace std;

int threeWaySplit(int n, int arr[]){
    if(n == 1){
        return 0;
    }
    int i=0, j = n - 1;
    int sum1 = 0, sum3 = 0;
    int ans = 0;
    while(i<j){
        if(sum1<sum3){
            sum1+=arr[i];
            i++;
        }
        else if(sum1>sum3){
            sum3+=arr[j];
            j--;
        }
        else{
            ans = sum1;
            sum1+=arr[i];
            sum3+=arr[j];
            i++;
            j--;
        }
    }
    if(i==j){
        if(sum1<sum3){
            sum1+=arr[i];
        }
        if(sum1>sum3){
            sum3+=arr[j];
        }
    }
    if(sum1==sum3){
        ans = sum1;
    }
    return ans;
}

int main(){
    int t,n,A[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        cout<<threeWaySplit(n,A)<<endl;
    }
}