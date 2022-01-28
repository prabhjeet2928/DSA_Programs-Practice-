/* Problem Statement
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

Example 2:
Input: s = "God Ding"
Output: "doG gniD"


Constraints:
1 <= s.length <= 5 * 104
s contains printable ASCII characters.
s does not contain any leading or trailing spaces.
There is at least one word in s.
All the words in s are separated by a single space. */

#include<iostream>
#include<string>
using namespace std;

string reverseWords(string s){
    int n = s.length();
    int start = 0;
    for(int i=0; i<n; i++){
        if(s[i] == ' ' || i == n - 1){
            int end = i - 1;
            if(i == n - 1){
                end = i;
            }
            while(start <= end){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    return s;
}

int main(){
    string s;
    getline(cin,s);
    cout<<reverseWords(s)<<endl;
}