/* Problem Statement: 
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

Constraints:
1 <= s.length <= 105
s[i] is a printable ascii character. */

#include<iostream>
#include<vector>
using namespace std;

void reverseString(vector<char> &s){
    int start = 0;
    int end = s.size() - 1;
    while(start <= end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}

void print(vector<char>& arr){
    int n = arr.size();
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main(){
    char value;
    vector<char> arr;
    cin>>value;
    while(value!='0'){
        arr.push_back(value);
        cin>>value;
    }
    reverseString(arr);
    print(arr);
}