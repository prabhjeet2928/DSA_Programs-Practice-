// Subtract the Product and Sum of Digits of an Integer.

/* 
Input -> n = 234
Output -> 15
Explanation -> 
Product of digits = 2*3*4 -> 24
Sum of digits = 2+3+4 -> 9
Results = 24-9 -> 15
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prod = 1, sum = 0;
    while(n!=0){
        int digit = n%10;
        prod = prod * digit;
        sum = sum + digit;
        n = n/10;
    }
    int answer = prod - sum;
    cout<<answer;
}