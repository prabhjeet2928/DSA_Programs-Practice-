/*

1
2 3
4 5 6
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1, count = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<count<<" ";
            count = count + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}