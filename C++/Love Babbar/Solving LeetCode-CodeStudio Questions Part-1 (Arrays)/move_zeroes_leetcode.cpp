/* Problem Statement:
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.

Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]

Constraints:
1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1

Follow up: Could you minimize the total number of operations done? */

#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int>& nums){
    int nonZero=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]!=0){
            swap(nums[i],nums[nonZero]);
            nonZero++;
        }
    }
}

void print(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> A;
    int x;
    cin>>x;
    while(x!=-1){
        A.push_back(x);
        cin>>x;
    }
    moveZeros(A);
    print(A);
}