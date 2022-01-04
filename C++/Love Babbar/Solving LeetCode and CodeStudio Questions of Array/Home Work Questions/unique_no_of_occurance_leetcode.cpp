/* Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Example 2:

Input: arr = [1,2]
Output: false

Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*/

#include<iostream>
using namespace std;
bool uniqueOccurance(int arr[], int size){
    int count[2001] = {0};
    int count_of_count[1001] = {0};

    for(int i=0; i<size; i++){
        count[arr[i]+1000]++;
    }

    for(int i=0; i<2001; i++){
        if(count[i] != 0 && ++count_of_count[count[i]] > 1){
            return false;
        }
    }
    return true;
}

int main(){
    int size, arr[1000];
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    bool found = uniqueOccurance(arr,size);

    if(found){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}