/*
A B C
B C D
C D E
*/

#include<iostream>
using namespace std;
int main(){
    int row = 1;
    int n;
    cin>>n;
    while(row<=n){
        int col = 1;
        char ch = 'A' + row - 1;
        while(col<=n){
            cout<<ch<<" ";
            ch = ch + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}