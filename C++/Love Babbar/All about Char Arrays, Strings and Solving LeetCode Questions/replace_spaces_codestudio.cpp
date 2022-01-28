/* Problem Statement
You have been given a string 'STR' of words. You need to replace all the spaces between words with “@40”.

Constraints:
1 <= T <= 50
0 <= |STR| <= 100
Where ‘|STR|’ is the length of a particular string including spaces.

Time limit: 1 sec

Sample Input :
2
Coding Ninjas Is A Coding Platform
Hello World

Sample Output :
Coding@40Ninjas@40Is@40A@40Coding@40Platform
Hello@40World

Explanation Of Sample Output :
In test case 1, After replacing the spaces with “@40” string is: 
Coding@40Ninjas@40Is@40A@40Coding@40Platform

In test case 2, After replacing the spaces with “@40” string is: 
Hello@40World */

#include<iostream>
#include<string>
using namespace std;

string replaceSpaces(string &str){
    string temp="";
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main(){
    int t;
    cin>>t;
    string str;
    while(t--){
        cin.ignore();
        getline(cin,str);
        cout<<replaceSpaces(str)<<endl;
    }
}