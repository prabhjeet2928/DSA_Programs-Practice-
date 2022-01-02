/*

   1
  22
 333
4444

*/

#include<iostream>
using namespace std;
int main(){
    int row = 1;
    int n;
    cin>>n;
    while(row<=n){
        int space = n - row;
        while(space){
            cout<<" ";
            space = space - 1;
        }
        int col = n - row + 1;
        while(col<=n){
            cout<<row;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}