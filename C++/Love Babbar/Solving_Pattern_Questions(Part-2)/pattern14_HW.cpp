/*

1234554321
1234**4321
123****321
12******21
1********1

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=n){
            if(col<=n-row+1){
                cout<<col;
            }
            else{
                cout<<"*";
            }
            col = col + 1;
        }
        col = col - 1;
        while(col>=1){
            if(col>=n-row+2){
                cout<<"*";
            }
            else{
                cout<<col;
            }
            col = col - 1;
        }
        cout<<endl;
        row = row + 1;
    }
}