/*

   1   
  121  
 12321
1234321

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row <= n){
        // Print space as 1st triangle
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        // Print 2nd triangle
        int col = 1;
        while(col<=row){
            cout<<col;
            col = col + 1;
        }
        // Print 3rd triangle
        int start = row - 1;
        while(start){
            cout<<start;
            start = start - 1;
        }
        cout<<endl;
        row = row + 1;
    }
}