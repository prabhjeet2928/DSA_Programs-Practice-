/* Problem Statement
You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.
Note :
String 'S' is NOT case sensitive.
Example :
Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.

Follow Up :
Can you solve the problem using O(1) space complexity?

Constraints :
1 <= T <= 100 
1 <= Length(S) <= 10^4
Where 'T' denotes the number of test cases and 'S' denotes the given string.

Time Limit : 1 sec

Sample Input :
2
N2 i&nJA?a& jnI2n
A1b22Ba

Sample Output :
Yes
No

Explanation :
For the first test case, S = “N2 i&nJA?a& jnI2n”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “n2injaajni2n”, which is a palindrome. Hence, the given string is also a palindrome.

For the second test case, S = “A1b22Ba”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “a1b22ba”, which is not a palindrome. Hence, the given string is not a palindrome. */

#include<iostream>
#include<string>
using namespace std;

char isLower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isSpecial(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return false;
    }
    return true;
}

bool checkPalindrome(string s){
    int start = 0;
    int end = s.size() - 1;
    while(start <= end){
        if(isSpecial(s[start])){
            start++;
            continue;
        }
        else if(isSpecial(s[end])){
            end--;
            continue;
        }
        else if(isLower(s[start]) == isLower(s[end])){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin.ignore();
        getline(cin,s);
        if(checkPalindrome(s)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}