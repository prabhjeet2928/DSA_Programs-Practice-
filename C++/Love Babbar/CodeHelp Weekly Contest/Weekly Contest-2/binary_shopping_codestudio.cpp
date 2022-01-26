/* Problem Statement
Bob is out to buy a binary string of size ‘N’. The shopkeeper gave him an integer ‘P’, a binary string ‘S’ and defined its cost as :
Cost = S[0] * (P^0) + S[1] * (P^1) + S[2] * (P^2) … S[N - 1] * (P^(n-1))
Since Bob was an old customer, the shopkeeper allowed him to do exactly two operations on this string to make its cost as low as possible.
In each operation, Bob can select any index and flip its bit, i.e if it was ‘0’ it will become ‘1’ or vice versa. Bob can select a single index multiple times.
Help Bob find the final string with minimum possible cost after performing exactly two operations on the given string.

Constraints:
1 <= T <= 5
1 <= N <= 10^5
2 <= P <= 10^9
0 <= S[i] <= 1

Time Limit: 1 sec

Sample Input:
2
5 5
00011
5 3
01101

Sample Output:
00000
01000

Explanation For Sample Input:
In the first test case, Bob can flip bits at last two indexes, making them ‘0’ thus reducing the whole cost to 0(0 * (5^0) + 0 * (5^1) + 0 * (5^2) + 0 * (5^3)  + 0 * (5^4)) which is the minimum possible. 

In the second test case, Bob can  flip the bits at index 2 and 4 , thus reducing the whole cost to 3(0 * (3^0) + 1 * (3^1) + 0 * (3^2) + 0 * (3^3)  + 0 * (3^4)) which is the minimum possible. */

#include<iostream>
#include<string>
using namespace std;

string binaryShopping(string S, int P){
    int op = 0;
    int size = S.size();
    for(int i=size-1; i>=0; i--){
        if(S[i] == '1'){
            S[i] = '0';
            op++;
        }
        if(op==2){
            break;
        }
    }
    if(op==2 || op==0){
        return S;
    }
    else if(op == 1){
        if(S[0] == '1'){
            S[0] = '0';
        }
        else{
            S[0] = '1';
        }
        return S;
    }
}

int main(){
    int t,n,P;
    string S;
    cin>>t;
    while(t--){
        cin>>n>>P>>S;
        cout<<binaryShopping(S,P)<<endl;
    }
}